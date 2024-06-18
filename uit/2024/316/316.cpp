/*
 * Created by LixWorth on 2024/03/19 20:04
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
ll n;

void solve() {
    long double a = n / 2;
    long double result = 4 * (M_PI * a * a / 2 - 0.5 * n * a);
    printf("%.6Lf\n", result);
}

int main() {
    FAST_IO;
    while (cin >> n) solve();
    return 0;
}
