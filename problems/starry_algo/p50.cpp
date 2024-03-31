/*
 * Created by LixWorth on 2024/03/30 21:36
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

const int N = 1e3 + 9;
int n, m, q, map[N][N], diff[N][N];

void solve() {
    cin >> n >> m >> q;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> map[i][j]; // 二维数组存一下
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            diff[i][j] += map[i][j];
            diff[i][j + 1] -= map[i][j];
            diff[i + 1][j] -= map[i][j];
            diff[i + 1][j + 1] += map[i][j];
        }
    }

    while (q--) { // q次添加操作
        int x1, y1, x2, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;

        diff[x1][y1] += c;
        diff[x1][y2 + 1] -= c;
        diff[x2 + 1][y1] -= c;
        diff[x2 + 1][y2 + 1] += c;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            map[i][j] = map[i - 1][j] + map[i][j - 1] - map[i - 1][j - 1] + diff[i][j];
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
