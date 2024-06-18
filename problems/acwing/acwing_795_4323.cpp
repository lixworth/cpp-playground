/*
 * Created by LixWorth on 2024/03/05 20:07
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

const int N = 100010;

int map[N];
int map1[N];

void solve() {
    int l,r;
    cin >> l >> r;
    cout << map1[r] - map1[l-1] << endl;
}

int main() {
    FAST_IO;
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) cin >> map[i],map1[i] = map1[i-1]+map[i];
    while (m--) solve();
    return 0;
}
