//
// Created by Worth Lix on 2024/3/4.
//
#include <iostream>
#include <stack>

using namespace std;

// https://www.hello-algo.com/chapter_stack_and_queue/stack/#513
// https://oi.wiki/lang/csl/container-adapter/#%E6%A0%88
int main() {
    stack<int> stack;

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