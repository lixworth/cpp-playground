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

const int N = 5e3 + 9;
int arr[N], prefix[N];

void solve() {
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    for (ll i = 1; i <= n; i++) cin >> arr[i], prefix[i] = prefix[i - 1] + arr[i];

    int mmax = 0;
    for (int i = 0; i + n - k <= n; i++) { mmax = max(mmax, prefix[i + n - k] - prefix[i]); }

    cout << mmax << endl;
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
