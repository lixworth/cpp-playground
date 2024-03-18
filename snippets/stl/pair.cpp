//
// Created by Worth Lix on 2024/3/11.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::pair<int, string> p0(1, "123");
    p0.first = 2;
    p0.second = "123";

    vector<pair<int, string>> pv;
    pv.push_back(pair<int, string>(1, "123"));
    pv.push_back(pair<int, string>(2, "12333"));

    for (auto p: pv) {
        cout << p.first << " " << p.second << endl;
    }
}