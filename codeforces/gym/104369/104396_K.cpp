/*
 * Created by LixWorth on 2024/04/27 19:32
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

int r, l, k, ans;
int arr[10][10];

void dfs(int u) {
    ans = std::min(u, ans);
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j <= l; ++j) {
            if (arr[i][j] == 1) {
                if (i >= 3 && arr[i - 1][j] && !arr[i - 2][j]) {
                    // up
                    arr[i][j] = arr[i - 1][j] = 0;
                    arr[i - 2][j] = 1;
                    dfs(u - 1);
                    arr[i][j] = arr[i - 1][j] = 1;
                    arr[i - 2][j] = 0;
                }
                if (i <= r - 2 && arr[i + 1][j] && !arr[i + 2][j]) {
                    // down
                    arr[i][j] = arr[i + 1][j] = 0;
                    arr[i + 2][j] = 1;
                    dfs(u - 1);
                    arr[i][j] = arr[i + 1][j] = 1;
                    arr[i + 2][j] = 0;
                }
                if (j >= 3 && arr[i][j - 1] && !arr[i][j - 2]) {
                    // left
                    arr[i][j] = arr[i][j - 1] = 0;
                    arr[i][j - 2] = 1;
                    dfs(u - 1);
                    arr[i][j] = arr[i][j - 1] = 1;
                    arr[i][j - 2] = 0;
                }
                if (j <= l - 2 && arr[i][j + 1] && !arr[i][j + 2]) {
                    // right
                    arr[i][j] = arr[i][j + 1] = 0;
                    arr[i][j + 2] = 1;
                    dfs(u - 1);
                    arr[i][j] = arr[i][j + 1] = 1;
                    arr[i][j + 2] = 0;
                }
            }
        }
    }
}

void solve() {
    memset(arr, 0, sizeof arr);
    cin >> r >> l >> k;

    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        arr[x][y] = 1;
    }

    ans = k;
    dfs(k);
    cout << ans << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
