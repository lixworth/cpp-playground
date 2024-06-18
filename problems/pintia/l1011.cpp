/*
 * Created by LixWorth on 2024/03/17 20:25
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

int map[4];

void solve() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for (auto item: a) {
        if (b.find(item) == string::npos) {
            cout << item;
        }
    }
    cout << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
