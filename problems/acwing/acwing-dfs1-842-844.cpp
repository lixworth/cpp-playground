/*
 * Created by LixWorth on 2024/03/18 20:36
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

int n;
const int N = 10;

bool state[N];
int path[N];

void dfs(int depth) {
    if (depth == n) { // 当长度为n当时候，已经搜到底 输出
        for (int i = 0; i < n; ++i) cout << path[i] << " ";
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; ++i) {
        if (!state[i]) {
            path[depth] = i;
            state[i] = true;

            dfs(depth + 1);
            state[i] = false; // 回溯 进行下一次
        }
    }
}

// https://www.acwing.com/problem/content/844/
// 深搜 回溯
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
