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

### Array 数组 - C数组的封装

## STL 算法库 `<algorithm>`