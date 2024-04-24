/*
 * Created by LixWorth on 2024/04/23 19:37
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

int data[1000][1000], result[1000][1000];

// https://www.luogu.com.cn/problem/P2670
void solve() {
    int m, n;
    cin >> m >> n;
    for (int i = 10; i < m + 10; ++i) {
        for (int j = 10; j < n + 10; ++j) {
            char input;
            cin >> input;
            if (input == '*') {
                data[i][j] = -1;
                result[i][j] = -1;
                result[i - 1][j] += 1;
                result[i + 1][j] += 1;
                result[i][j + 1] += 1;
                result[i][j - 1] += 1;
                result[i - 1][j - 1] += 1;
                result[i + 1][j + 1] += 1;
                result[i + 1][j - 1] += 1;
                result[i - 1][j + 1] += 1;
            } else {
                data[i][j] = -2;
            }
        }
    }
    for (int i = 10; i < m + 10; ++i) {
        for (int j = 10; j < n + 10; ++j) {
            if (data[i][j] == -1) {
                cout << '*';
            } else cout << result[i][j];
        }
        cout << "\n";
    }

}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
