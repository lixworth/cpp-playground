/*
 * Created by LixWorth on 2024/03/26 19:20
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

const ll N = 2e5 + 10;
const ll p = 1e9 + 7;
ll sum, arr[N], cnt[2005], n;

ll gcd(ll x, ll y) {
    return y == 0 ? x : gcd(y, x % y);
}

ll lcm(ll x, ll y) {
    return x / gcd(x, y) * y;
}

// https://www.starrycoding.com/problem/20
void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    for (int i = 0; i < n; ++i) cnt[arr[i]]++;

    for (int i = 0; i <= 2000; ++i) {
        for (int j = i; j <= 2000; ++j) {
            sum = (sum + (i ^ j) * lcm(i, j) % p * cnt[i] % p * cnt[j] % p) % p;
        }
    }

    cout << sum << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
