/*
 * Created by LixWorth on 2024/03/19 19:10
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
#include <cmath>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

ll a, b, c; // 内向型、外向型和通用型

void solve() {
    cin >> a >> b >> c;
    ll sum = 0;

    sum += a;
    sum += b / 3;
    if (b % 3 != 0 && b % 3 + c < 3) {
        cout << -1 << endl;
    } else {
        if (b % 3 != 0) {
            c -= 3 - b % 3;
            sum++;
        }
        sum += c / 3;
        if (c % 3 != 0) sum++;
        cout << sum << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
