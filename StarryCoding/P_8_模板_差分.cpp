/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1e5 + 10;
ll arr[N], diff[N], prefix_diff[N], prefix[N];

void solve() {
    int n, p, q;
    cin >> n >> p >> q;
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    for (int i = 1; i <= n; ++i) diff[i] = arr[i] - arr[i - 1];

    for (int i = 0; i < p; ++i) {
        int l, r, x;
        cin >> l >> r >> x;
        diff[l] += x;
        diff[r + 1] -= x;
    }

    // 前缀和还原数组
    for (int i = 1; i <= n; ++i) prefix_diff[i] = prefix_diff[i - 1] + diff[i];

    // 前缀和求区间和
    for (int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + prefix_diff[i];

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
}

int main() {
    IOS int tt = 1;
    //    cin >> tt;
    while (tt--) solve();
    return 0;
}
