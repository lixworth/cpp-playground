//
// Created by Worth Lix on 2024/3/6.
//
#include <iostream>
#include <set>

using namespace std;

int main() {
//    multiset<int> ms0;
//    ms0.insert(1);
//    ms0.insert(1);
//    ms0.insert(1);
//    // 字面意思
//    for (const auto &item: ms0){
//        cout << item << endl;
//    }

    set<int> set0;
    for (int i = 0; i < 100; ++i) {
        set0.insert(i);
    }
    cout << *set0.lower_bound(50) << endl; // 查找大于等于x的元素中最小的一个 50
    cout << *set0.upper_bound(50) << endl; // 查找大于x的元素中最小的一个 51

    cout << set0.count(5) << endl;
}