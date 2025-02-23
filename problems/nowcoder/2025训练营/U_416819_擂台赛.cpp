/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>
#include <vector>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 100;
int arr[N][N]; // arr[x][i] = 1 为能打败

vector<int> nums;

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int tmp;
            cin >> tmp;
            if (tmp == 0)
                continue;
            else if (tmp == 1) {
                arr[i][j] = 1;
            } else {
                arr[j][i] = 1;
            }
        }
    }
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
