/*
 * Created by LixWorth on 2024/02/07 13:26
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define FAST_IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);

using namespace std;

typedef long long ll;

ll map[1000];

void solve() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        cin >> map[i];
    }

    for (int i = 0; i < n; ++i) {
        if (map[i] < 0) {
            if (k <= 0) break;
            ll tmp = map[i];
            map[i] = map[i + 1];
            map[i + 1] = tmp;
            k--;
        }
    }
    ll count1 = 0, count2 = 0;
    for (int i = 0; i < n; ++i) {
        if (map[i] < 0) break;
        count1 += map[i];
    }
    for (int i = n; i <= 0; i--) {
        if (map[i] < 0) break;
        count1 += map[i];
    }

}

int main() {
    FAST_IO;
//    int T;
//    cin >> T;
//    while (T--)solve();
    solve();
    return 0;
}
