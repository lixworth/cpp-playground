/*
 * Created by LixWorth on 2024/03/08 20:25
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

const int N = 1e5 + 9;
int n, q;
ll map[N], prefix[N]; // 全部数字、前缀和
int l, r;

// https://www.starrycoding.com/problem/7
void solve() {
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) cin >> map[i];
    for (int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + map[i];

    while (q--) {
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
        // 范围 l-r 用 1-r 之后减去 1-(l-1) 的和
    }
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
