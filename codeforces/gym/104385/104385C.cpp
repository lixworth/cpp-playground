/*
 * Created by LixWorth on 2024/05/09 17:36
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

using namespace std;
const int N = 1e6 + 10;

ll a[N];

ll get_wei(ll x, ll p) {
    ll res = 0;
    while (x) {
        if (x % p) res += x % p;
        x /= p;
    }
    return res;
}

int main() {
    FAST_IO
    ll n, p, sum = 0;
    cin >> n >> p;
    if (p == 1) {
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum = (sum + a[i]) % 2;
        }
    } else {
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            sum += get_wei(a[i], p);
        }
    }

    if (sum % 2 && p % 2) cout << "GOOD" << endl;
    else cout << "BAD" << endl;
}