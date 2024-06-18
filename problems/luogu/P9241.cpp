/*
 * Created by LixWorth on 2024/03/07 19:56
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
#include <cstring>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

int N;
struct Airplane{
    int tt;
    int dd;
    int ll;
    // t d l
    // 到达 剩余油 降落所需
};
Airplane map[20];

int flag[20]; // default 0
// time 上一个飞机的降落时间
bool dfs(int dep,int time) {
    if (dep >= N) {
        cout << "YES" << endl;
        return true;
    }
   // dep+1

   // tt + dd ll
}

void solve() {
    cin >> N;
    for (int i = 0; i < N; ++i) cin >> map[i].tt >> map[i].dd >> map[i].ll;

    memset(flag,0,sizeof flag);
    if(dfs(0,0)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
