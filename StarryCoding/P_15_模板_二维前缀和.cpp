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

const int N = 1e3 + 10;
ll arr[N][N], prefix[N][N];

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) cin >> arr[i][j];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j)
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + arr[i][j];
    }

    for (int i = 0; i < q; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1] << endl;
    }
}

int main() {
    IOS int tt = 1;
    //    cin >> tt;
    while (tt--) solve();
    return 0;
}
