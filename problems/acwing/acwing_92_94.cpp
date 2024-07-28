/*
 * Created by LixWorth on 2024/03/05 16:46
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

const int N = 15;

int n;
int map[N]; // 记录状态 0还没考虑 1已选 2不选

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; ++i) {
            if (map[i] == 1) cout << i + 1 << " ";
        }
        cout << "\n";
        return;
    }
    map[u] = 2;
    dfs(u + 1);
    map[u] = 0;

    map[u] = 1;
    dfs(u + 1);
    map[u] = 0;
}

// https://www.acwing.com/problem/content/94/
void solve() {
    cin >> n;
    dfs(0);
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
