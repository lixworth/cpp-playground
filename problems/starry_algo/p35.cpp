/*
 * Created by LixWorth on 2024/03/31 00:26
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

const int N = 1e5 + 9;
int n;
ll prefix[N], a[N], w[N];

// https://www.starrycoding.com/problem/35
void solve() {
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> w[i];

    ll ess = 0;
    for (int i = 1; i <= n; ++i) ess += a[i] * w[i];
    // 计算标准值 0的时候直接就0了 也就是不改变时候的基础数值

    ll mi = 0, fix = 0; // mi = min(prefix[j]), j=[0,1)
    // fix代表更改的数值

    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + (a[i] == 1 ? -1 : 1) * w[i]; // 前缀和 计算是 -w 还是 +w
        // 将问题转换为求最长字段

        fix = std::max(fix, prefix[i] - mi); // fix要取最大
        mi = std::min(mi, prefix[i]); // mi取最小值
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
