/*
 * Created by LixWorth on 2024/03/30 17:21
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
ll n, map[N], diff[N], prefix[N];

// https://oj.eriktse.com/problem.php?id=1050
void solve() {
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> map[i];
    for (int i = 1; i <= n; ++i) diff[i] = map[i] - map[i - 1]; // 求差分数组

    int m;
    cin >> m;
    while (m--) { // m次修改操作
        int l, r, x;
        cin >> l >> r >> x;

        // 给 [l,r] 进行 +x 修改
        diff[l] += x; // 修改 [l,n] +x
        diff[r + 1] -= x; // 修改 [r+1,n] -x
    }

    for (int i = 1; i <= n; ++i) map[i] = map[i - 1] + diff[i]; // 通过给修改后的 差分数组求 前缀和，还原修改后的数组map
    for (int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + map[i]; // 再次求前缀和

    int q;
    cin >> q;
    while (q--) { // q次询问
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
