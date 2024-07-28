/*
 * Created by LixWorth on 2024/03/12 20:51
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

int cnt[10];

void solve() {
    for (int i = 0; i <= 9; ++i) cnt[i] = 2021;
    ll result = 0;
    bool run = true;
    ll i = 1;
    while (run) {
        ll tmp = i;
        while (tmp) {
            if (cnt[tmp % 10] >= 0) {
                cnt[tmp % 10]--;
            } else {
                run = false;
            }
            tmp /= 10;
        }
        result = i;
        i++;
    }
    cout << result << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
