/*
 * Created by LixWorth on 2024/02/18 20:15
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define FAST_IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);

using namespace std;

typedef long long ll;

ll map[1000];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> map[i];
    }

    ll count = 0;
    for (int i = 0; i < n; ++i) {
        if (i == 0) count += map[i];
        else {
            if(count < map[i]){
                count = map[i];
            }else if(count == map[i]){
                count += map[i];
            }else{
                count = map[i]*(1+count/map[i]);
            }
        }
    }

    cout << count << endl;
}

int main() {
    FAST_IO;
    int T;
    cin >> T;
    while (T--) solve();
//    solve();
    return 0;
}
