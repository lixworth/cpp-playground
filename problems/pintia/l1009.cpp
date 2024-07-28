/*
 * Created by LixWorth on 2024/03/17 20:02
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
//#include <algorithm>
#include <cmath>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

ll n;
ll a = 0, b = 1;
ll d; // 整数部分

bool isPrime(ll x) {
    if (x == 1) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    cin >> n;
    for (ll i = 0; i < n; ++i) {
        string input;
        cin >> input;
        ll fz = 0, fm = 0;
        scanf("%lld/%lld", &fz, &fm);
        ll new_fm = lcm(abs(fm), abs(b));
        a *= new_fm / b;
        a += fz * (new_fm / fm);
        b = new_fm;

        if (a > b) {
            d += a / b;
            a = a % b;
        } else if (a == b) {
            a = 0, b = 1;
            d++;
        }
    }

    ll new_gcd = gcd(abs(a), abs(b));

    if (a == 0 && d == 0) {
        cout << 0 << endl;
    } else {
        if (d != 0) cout << d;
        if (d != 0 && a != 0) cout << " ";
        if (a != 0) cout << a / new_gcd << "/" << b / new_gcd << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
