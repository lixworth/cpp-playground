/*
 * Created by LixWorth on 2024/03/16 20:14
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>

//#include <algorithm>
#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;
const double Pi = 3.14159265358979323846;

void solve() {
    int n;
    cin >> n;
    printf("%.6f", Pi * (n * 1.0 / 2) * (n * 1.0 / 2) - (n * 1.0 * sqrt(2) * n * 1.0 * sqrt(2)));
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
