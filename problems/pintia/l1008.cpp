/*
 * Created by LixWorth on 2024/03/17 19:17
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
//#include <algorithm>
#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

int a, b;

void solve() {
    cin >> a >> b;
    ll sum = 0;
    for (int i = a, count = 1; i <= b; ++i, count++) {
        sum += i;
        if (count % 5 == 0 && i != b) printf("%5d\n", i);
        else printf("%5d", i);
    }

    printf("\nSum = %lld\n", sum);
}

int main() {
    FAST_IO;
    int T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}