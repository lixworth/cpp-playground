/*
 * Created by LixWorth on 2024/03/19 19:30
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

ll a, b, m; // 第一次安装、第二次安装的发射频率，以及烟花在天空中可见的时间。

void solve() {
    cin >> a >> b >> m;

    cout << 2 + m / a + m / b << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
