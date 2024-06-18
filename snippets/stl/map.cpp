//
// Created by Worth Lix on 2024/3/6.
//
#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> m0;
//    map<pair<int, int>, vector<int>> test;
    m0[1] = "12sss3";
    m0[2] = "12ss3s3";
    m0[4] = "12ss333s3";
    m0[4] = "11";

    for (const auto &item: m0) {
        cout << item.first << " " << item.second << endl;
    }
}