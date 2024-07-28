/*
 * Created by LixWorth on 2024/03/25 20:05
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

using namespace std;

using ll = long long;

const int N = 10;
int arr[N];
bool used[N];

int add(int l, int r) {
    int ans = 0;
    for (int i = l; i <= r; ++i) {
        ans = ans * 10 + arr[i];
    }
    return ans;
}

int x, a, b, c, sum;

// 1 2 3 4 5 6 7 8 9
// 0 1 2 3 4 5 6 7 8
void dfs(int u) {
    if (u == 9) {
        for (const auto &item: arr) {
            cout << item << " ";
        }
        cout << endl;
        for (int i = 0; i < 7; ++i) {
            for (int j = i + 1; j < 8; ++j) {
                a = add(0, i), b = add(i + 1, j), c = add(j + 1, 8);
                if (a == 0 && b == 0 && c == 0) continue;
                if (a * c + b == x * c) {
                    sum++;
                }
            }
        }
    }
    // 全排列
    for (int i = 1; i <= 9; ++i) {
        if (!used[i]) {
            used[i] = true;
            arr[u] = i;
            dfs(u + 1);
            used[i] = false; // 回溯
        }
    }
}

void solve() {
    cin >> x;
    dfs(0);
    cout << sum << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
