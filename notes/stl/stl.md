# CPP STL 标准模板库

[https://oi.wiki/lang/csl/](https://oi.wiki/lang/csl/)

## STL 容器

<img src="//static.cdn.menci.xyz/oi-wiki/lang/csl/images/container1.png?h=2a-3bg" alt="container1"/>

### 迭代器 Iterator
* 迭代器本身可以看作一个数据指针
```c++
vector<int> v0;
vector<int>::iterator it = v0.begin();
vector<int>::iterator it2 = v0.end();
// 左闭右开的结构 [begin,end) end是最后一个元素的index+1

cout << *it << endl; // index 0
cout << *(it2-1) << endl; // index 1
    
// c++ 11 可以用 auto
auto it3 = v0.begin();

// 循环
for (int i = 0; i < v0.size(); ++i) {
    cout << v0[i] << " ";
}
for (auto i = v0.begin(); i != v0.end(); ++i) {
    cout << *i << " ";
}
```
### 序列式容器

#### Vector 向量 - 动态数组结构 类似于顺序线性表
```c++
vector<int> v0;
vector<int> v1[233]; // 第一维度长233静态长度，第二位长度动态变化

// 结构体初始化
struct Rec{
    int x,y;
};
vector<Rec> v2;
```

```c++
v0.size(); // 实际长度 O(1)
v0.empty(); // 是否为空 bool O(1)
v0.clear(); // 清空

vector<int> v1({1,2,3,4,5,6,7,9,10});
v1.front() // 首个元素 1 相当于 v1.begin()
v1.back(); // 结尾的元素 10 位于 v1.end() 之前 

v1.push_back(11); // 再最后加一个元素 O(1)
v1.pop_back(); // 删除最后一个元素 O(1)
```

### 容器适配器: **栈与队列**
* 栈/堆栈/Stack `std::stack` 

是一种遵循 **先入后出** 逻辑的线性数据结构。
仅支持查询或删除最后一个加入的元素（栈顶元素），不支持随机访问，且为了保证数据的严格有序性，不支持迭代器。

```c++
int main() {
    // std::stack<TypeName> s;  // 使用默认底层容器 deque，数据类型为 TypeName
    // std::stack<TypeName, Container> s;  // 使用 Container 作为底层容器
    // std::stack<TypeName> s2(s1);        // 将 s1 复制一份用于构造 s2
    
    stack<int> stack; // 初始化
    cout << stack.empty() << endl; // 询问容器是否为空 1

    for (int i = 1; i <= 100; ++i) {
        stack.push(i); // 向栈中插入元素 i
    }

    cout << stack.top() << endl; // 访问栈顶元素 100 （如果栈为空，此处会出错）
    cout << stack.size() << endl; // 查询容器中的元素数量 100

    stack.pop(); // 删除栈顶元素
    cout << stack.top() << endl; // 99

    cout << stack.size() << endl; // 查询容器中的元素数量 99

    cout << stack.empty() << endl; // 询问容器是否为空 0
    return 0;
}
```
* 队列 Queue 是一种遵循先入先出规则的线性数据结构。
顾名思义，队列模拟了排队现象，即新来的人不断加入队列尾部，而位于队列头部的人逐个离开。
```c++
int main() {
//    std::queue<TypeName> q;  // 使用默认底层容器 deque，数据类型为 TypeName
//    std::queue<TypeName, Container> q;  // 使用 Container 作为底层容器
//    std::queue<TypeName> q2(q1);  // 将 s1 复制一份用于构造 q2   
    
    queue<int> queue;
    cout << queue.empty() << endl; // true

    for (int i = 1; i <= 100 ; ++i) {
        queue.push(i);
    }

    cout << queue.front() << endl; // 1
    queue.pop(); // 出队

    cout << queue.front() << endl; // 2
    cout << queue.size() << endl; // 99

    cout << queue.empty() << endl; // false
    return 0;
}
```

## STL 算法库 `<algorithm>`