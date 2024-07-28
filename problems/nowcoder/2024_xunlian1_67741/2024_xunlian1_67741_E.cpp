/*
 * Created by LixWorth on 2024/03/06 19:23
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

int n, m;
int a[100], b[100], c[100], re[100];


void calc() {

}

void dfs(int dep) {
    if (dep > m) {
        calc();
        return;
    }

    for (int i = 1; i <= 3; ++i) {
        re[dep] = i;
    }
}

void solve() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= m; ++i) {
        cin >> b[i] >> c[i];
    }

    dfs(1);
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
