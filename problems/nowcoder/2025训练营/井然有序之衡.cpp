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

const ll N = 1e5 + 10;
ll arr[N];

void solve() {
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i <= n; ++i) {
        cin >> arr[i];
        ans += arr[i];
    }
    sort(arr, arr + n);
    if (ans != (1 + n) * n * 0.5) {
        cout << -1 << endl;
    } else {
        ll cnt = 0;
        for (ll i = 1; i <= n; ++i) { cnt += abs(arr[i] - i); }
        cnt /= 2;
        cout << cnt << endl;
    }
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
