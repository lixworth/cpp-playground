/*
 *  P36 最长连续不重复子序列 StarryCoding
 * Created by LixWorth on 2025/02/28 10:40
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>

#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1e5 + 9;
int arr[N], c[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    for (int i = 1; i <= n; ++i) c[arr[i]] = 0; // 用于统计选中区间内有哪些数

    ll ans = 0;

    for (int i = 1, j = 0; i <= n; ++i) {
        // 双指针 i,j check条件 c[arr[j + 1]] == 0
        while (j < n && c[arr[j + 1]] == 0) { // j 先移动到 j+1,如果不为 0 则说明区间内重复了
            j++; // 可以移动 j 所以自增 并且记录一下选中到区间内
            c[arr[j]]++;
        }
        ans = max(ans, j - i + 1ll); // 重复的 应该记录到 j 而不是 j+1
        c[arr[i]]--; // 去掉区间中 i 的记录,下一轮该移动 i 指针
    }

    cout << ans << endl;
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
