/*
 * Created by LixWorth on 2024/03/17 20:40
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
//#include <algorithm>
#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

void solve() {
    int n;
    string a;
    cin >> n >> a;
    // 四舍五入函数 round
    for (int j = 0; j < round(n / 2); j++) {
        for (int i = 0; i < n; ++i) {
            cout << a;
        }
        cout << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
