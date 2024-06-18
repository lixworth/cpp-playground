#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int j, o;

//是否是质数
bool isPrime(ll x) {
    if (x == 1) return false;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        ll x;
        cin >> x;
        cout << (isPrime(x) ? "Yes" : "No") << endl;
    }
    return 0;
}