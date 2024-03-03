//
// Created by Worth Lix on 2024/3/3.
//
#include <iostream>
#include <vector>

using namespace std;

// STL 序列式容器 Vector 类似于线性顺序表
// 内存连续的、可变长度 的数组（亦称列表）
int main(){
    vector<int> v0;
    vector<int> v1[233]; // 第一维度长233静态长度，第二位长度动态变化

    struct Rec{
        int x,y;
    };

    vector<Rec> v2;

    v0.size(); // 实际长度 O(1)
    v0.empty(); // 是否为空 bool O(1)

    v0.clear(); // 清空

    v0.push_back(233);
    vector<int>::iterator it = v0.begin();
    cout << *it << endl;
    return 0;
}