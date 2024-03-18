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
#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

int n;

ll a[10000], b[10000];

void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string input;
        cin >> input;
        int sp = input.find("/"); // 2
        a[i] = stoi(input.substr(0, sp));
        b[i] = stoi(input.substr(sp + 1, input.size() - sp));
    }

    int min = 1;
    for (int i = 0; i < n; ++i) {
        min = lcm(min, b[i]);
    }
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result += a[i] * (min / b[i]);
    }

    int d = result / min;
    int fz = result - d * min;
    int f_gcd = gcd(fz, min);
    if (d != 0) {
        cout << d << " ";
    }
    cout << fz / f_gcd << "/" << min / f_gcd << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
