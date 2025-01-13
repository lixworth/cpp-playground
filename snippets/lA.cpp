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

void solve() {
    for (int i = 1; i <= 1e18; ++i) {
        if (i % 2 && i % 5 && i % 11 && i % 13) {
            cout << i << " " << endl;
        }
    }
}

int main() {
    int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
