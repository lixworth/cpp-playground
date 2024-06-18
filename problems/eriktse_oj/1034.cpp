/*
 * Created by LixWorth on 2024/03/31 00:54
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

//using namespace std;
using std::cin, std::cout;
using ll = long long;

int n;
const int N = 1e5 + 9;
ll a[N], w[N];

// https://oj.eriktse.com/problem.php?id=1034
// 贪心作法求最长子段和
void solve() {
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> w[i];

    ll ess = 0;
    for (int i = 1; i <= n; ++i) ess += a[i] * w[i];
    // 计算标准值 0的时候直接就0了 也就是不改变时候的基础数值

    ll mx = 0, fix = 0;// 最长子段和
    for (int i = 1; i <= n; ++i) {
        mx = std::max(0ll, mx + (a[i] ? -1 : 1) * w[i]);
        fix = std::max(fix, mx);
    }

    cout << ess + fix << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
