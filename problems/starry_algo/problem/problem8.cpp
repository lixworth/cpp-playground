/*
 * Created by LixWorth on 2024/03/10 17:44
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

const int N = 1e5;
int n, p, q;
int map[N], diff[N], prefix[N];

void solve() {
    cin >> n >> p >> q;
    for (int i = 1; i <= n; ++i) cin >> map[i];
    for (int i = 1; i <= n; ++i) diff[i] = map[i] - map[i - 1];

    while (p--) {
        int l, r, x;
        cin >> l >> r >> x;
        diff[l] += x, diff[r + 1] -= x;
    }

    for (int i = 1; i <= n; ++i) map[i] = map[i - 1] + diff[i];
    for (int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + map[i];

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
