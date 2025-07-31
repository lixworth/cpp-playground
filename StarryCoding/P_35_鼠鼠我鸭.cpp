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
ll weight[N], type[N], fix[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> type[i];
    for (int i = 1; i <= n; ++i) cin >> weight[i];

    ll sum = 0; // 修改前鼠鼠的总和
    for (int i = 1; i <= n; ++i) sum += type[i] * weight[i];

    // 构架修改区间后的前缀和数组, 是鼠鼠就+,不是是就-
    for (int i = 1; i <= n; ++i) {
        if (type[i]) {
            fix[i] = fix[i - 1] - weight[i];
        } else {
            fix[i] = fix[i - 1] + weight[i];
        }
    }

    // 遍历求修改的最大值 fix_value = fix[i] - fix[r] , fix[r]要最小,fix_value整体要最大
    ll mmin = fix[0], fix_value = 0;
    for (int i = 1; i <= n; ++i) {
        fix_value = max(fix_value, fix[i] - mmin);
        mmin = min(mmin, fix[i]);
    }

    cout << sum + fix_value << endl;
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
