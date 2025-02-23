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
    ll n, m;
    cin >> n >> m;

    ll cnt = 1;
    while (true) {
        if (abs(pow(m, cnt + 1) - n) < abs(pow(m, cnt) - n)) {
            cnt++;
        } else {
            break;
        }
    }

    cout << cnt << endl;
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
