/*
 * Created by LixWorth on 2024/02/20 11:05
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

void solve() {
    string x,y;
    cin >> x >> y;

    if(x[0] == y[0]){
        cout << 1 << endl;
        cout << (x[1] > y[1] ? "U" : "D") << endl;
    }else if(x[1] == y[1]){
        cout << 1 << endl;
        cout << (x[0] > y[0] ? "L" : "R") << endl;
    }else{
        int ans = min(abs(x[1] -y[1]),abs(x[0] - y[0]));
        cout << ans << endl;
        if(x[0] < y[0] && x[1] > y[1]){
            cout << "RD" << endl;
        }
    }
}

int main() {
    FAST_IO;
//    int T;
//    cin >> T;
//    while (T--) solve();
    solve();
    return 0;
}
