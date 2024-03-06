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

void dfs(int* data,int n,int m,int status){ // win+3 / fai+0 / normal a+1
    if(status == 0) {
        data[n] += 1;
        data[m] += 1;
        dfs(data,n,m,1);
        dfs(data,n,m,2 );
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    int map[n];
    for (int i = 1; i <= n; i++) cin >> map[i];
    while (m--){
        dfs(map,n,m,0);
    }
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
