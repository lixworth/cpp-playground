/*
 * Created by LixWorth on 2024/02/23 14:28
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

int map[5] {30,42,66,78,70};
void solve() {
    int l,r;
    cin >> l >> r;

    for (int i = 0; i < 5; ++i) {
        if(l <= map[i] && r >= map[i]){
            cout << map[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
