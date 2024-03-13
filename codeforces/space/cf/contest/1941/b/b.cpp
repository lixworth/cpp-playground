/*
 * Created by LixWorth on 2024/03/12 00:02
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

const int N = 2e5;

ll n;
ll a[N];

// 1 2 7 2
void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) {
        if (i == n - 2) break;
        if (a[i] < 0) {
            cout << "NO" << endl;
            return;
        }
        ll tmp = a[i];
        a[i] = 0;
        a[i + 1] -= tmp * 2;
        a[i + 2] -= tmp;
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
