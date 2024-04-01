/*
 * Created by LixWorth on 2024/03/31 22:57
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

const int N = 2e5 + 9;
int map[N], c[N];

// https://oj.eriktse.com/problem.php?id=1062
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> map[i];
    for (int i = 1; i <= n; ++i) c[map[i]] = 0; // 利用桶排序的思想

    ll ans = 0;
    for (int i = 1, j = 0; i <= n; ++i) {
        while (j < n && c[map[j + 1]] == 0) { // 如果没有出现过才开始计数
            j++;
            c[map[j]]++;
        }

        ans = std::max(ans, j - i + 1ll); // 求 max
        c[map[i]]--; // 再去移动 i
    }

    cout << ans << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
