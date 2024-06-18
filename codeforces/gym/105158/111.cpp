#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define IOS std::ios::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0);
using namespace std;

const int N = 2e5 + 9;
ull a[N];
ull b[N];

ull ufpow(ull base, ull power) // 快速幂
{
    ull result = 1;
    while (power > 0) {
        if (power & 1) {
            result = base * result;
        }
        power >>= 1;
        base = base * base;
    }
    return result;
}

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) cin >> a[i];
//    for (int i = 1; i <= m; i++) {
//        b[i] = a[i] + 1;
//    }

    ull res = 0;

    res += a[m] + ufpow(m, 4); // 最后一行
    for (int i = 1, j = 1; i <= m; ++i) {
        ull check = a[i] + ufpow(j, 4) + a[m] + ufpow(m - j, 4);
        if (res > check) {
            res = res - check;
        } else {
            j++;
        }
    }

    cout << res << endl;
}


int main() {
    IOS
    int tt = 1;
    while (tt--)
        solve();
}

// shuiyunshen
// yanxiazhi
//A heart that`s broke is a heart that`s been loved