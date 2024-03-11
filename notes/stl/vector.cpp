//
// Created by Worth Lix on 2024/3/3.
//
#include <iostream>
#include <vector>

using namespace std;

// STL 序列式容器 Vector 类似于线性顺序表
// 内存连续的、可变长度 的数组（亦称列表）
int main() {
    vector<int> a({1, 2, 3, 4, 5, 6, 7, 9, 10});

    cout << a.front() << " " << a.back() << endl;

    a.push_back(11); // 再最后加一个元素 O(1)
    a.push_back(11); // 再最后加一个元素 O(1)
    a.push_back(11); // 再最后加一个元素 O(1)
    a.push_back(11); // 再最后加一个元素 O(1)
    a.push_back(11); // 再最后加一个元素 O(1)
    a.pop_back(); // 删除最后一个元素 O(1)


    for (const auto &item: a) {
        cout << item << endl;
    }
    return 0;
}