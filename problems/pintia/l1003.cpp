/*
 * Created by LixWorth on 2024/03/13 20:09
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
#include <map>
#include <cstdio>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

map<ll, ll> m;

void solve() {
    string input;
    cin >> input;

    for (auto item: input) {
        m[item - 48]++;
    }

    for (auto item: m) {
        cout << item.first << ":" << item.second << endl;
    }


}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
