/*
 * Created by LixWorth on 2024/03/16 18:23
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

ll n;
ll map[10000];

void solve() {
    cin >> n;
    for (ll i = 0; i < n; ++i) {
        string x;
        cin >> x;
        ll ans = 0;
        for (auto item: x) {
            ans += item - 48;
        }
        map[i] = ans;
    }

    if (map[0] != map[1]) {
        if (map[0] == map[2]) {
            cout << 2 << endl;
        } else {
            cout << 1 << endl;
        }
    } else {
        for (ll i = 1; i < n; ++i) {
            if (map[i] != map[i - 1] && map[i] != map[i + 1]) {
                cout << i + 1 << endl;
            }
        }
    }
}

int main() {
    FAST_IO;
    ll T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
