//
// Created by Worth Lix on 2024/3/6.
//
#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> set0;
    multiset<int> ms0;
    ms0.insert(1);
    ms0.insert(1);
    ms0.insert(1);


    set0.insert(1);
    set0.insert(1);
    // 字面意思

    for (const auto &item: ms0){
        cout << item << endl;
    }
}