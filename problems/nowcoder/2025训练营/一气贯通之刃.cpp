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

const int N = 1e5 + 10;
vector<int> g[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i = 1; i <= n; ++i) {
        if (g[i].size() > 2) {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (g[i].size() == 1)
            cout << i << " ";
    }
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
