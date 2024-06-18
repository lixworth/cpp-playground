/*
 * Created by LixWorth on 2024/03/05 17:52
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
#include <sstream>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

const int N = 10010;

int m, n;
int map[N];

void solve() {
    int l;
    cin >> l;
    int x;
    while (cin >> x) map[x]++;

    for (int i = 1; i < N; ++i) {
        if (map[i] > 1) {
            n = i;
        }
        if (map[i - 1] != 0 && map[i] == 0 && map[i + 1] != 0 && m == 0) m = i;
        if (m != 0 && n != 0) break;
    }

    cout << m << " " << n << "\n";
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
