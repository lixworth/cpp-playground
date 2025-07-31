/*
 *  P50 【模板】二维差分 StarryCoding
 * Created by LixWorth on 2025/02/24 19:13
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>

#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1e3 + 9;
ll arr[N][N], prefix[N][N], diff[N][N];

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) { cin >> arr[i][j]; }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            diff[i][j] += arr[i][j];
            diff[i + 1][j] -= arr[i][j];
            diff[i][j + 1] -= arr[i][j];
            diff[i + 1][j + 1] += arr[i][j];
        }
    }
    for (int i = 0; i < q; ++i) {
        int x1, y1, x2, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        diff[x1][y1] += c;
        diff[x1][y2 + 1] -= c;
        diff[x2 + 1][y1] -= c;
        diff[x2 + 1][y2 + 1] += c;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) prefix[i][j] = diff[i][j] + diff[i - 1][j] + diff[i][j - 1] + diff[i - 1][j - 1];
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            arr[i][j] = prefix[i][j] - arr[i - 1][j - 1] - arr[i - 1][j] - arr[i][j - 1];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    IOS int tt = 1;
    //    cin >> tt;
    while (tt--) solve();
    return 0;
}
