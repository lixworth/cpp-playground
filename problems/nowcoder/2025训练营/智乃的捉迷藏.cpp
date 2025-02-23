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
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    for (int p1 = 0; p1 <= n; ++p1) {
        for (int p2 = 0; p2 <= n; ++p2) {
            for (int p3 = 0; p3 <= n; ++p3) {
                if (a + b + c - p1 - p2 - p3 == n && p1 + p2 + p3 <= n) {
                    cout << "Yes" << endl;
                    return;
                }
            }
        }
    }

    cout << "No" << endl;
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
