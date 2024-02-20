/*
 * Created by LixWorth on 2024/02/20 00:12
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>

#define FAST_IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);

using namespace std;

typedef long long ll;

ll digitSum(ll num)
{
    ll sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void solve() {
    ll n;
    cin >> n;
    string num = to_string(n);
    ll m = n / 9; // 按9分割
    ll count = 0;
    if (m <= 2) {
        count += 45 * m;
        for (int i = 1; i <= n % 9; ++i) {
            count += i;
        }
    } else { // m>2
        count += 45 * m;
        // m-2 个 9
//        count += (9*(1-pow(9,m-2)))/(1-9);
        ll q = 0;
        for (int i = 1; i <= m-2 ; ++i) {
            q += i;
        }
        count += 9*q;
        for (ll i = 9*m+1; i <= n; ++i) {
            count += digitSum(i);
        }
    }// 9+2*9 +3*9
    cout << count << endl;
}

int main() {
    FAST_IO;
    int T;
    cin >> T;
    while (T--) solve();
//    solve();
    return 0;
}
