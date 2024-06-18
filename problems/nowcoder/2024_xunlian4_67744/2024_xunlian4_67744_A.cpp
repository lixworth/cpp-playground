/*
 * Created by LixWorth on 2024/02/19 13:12
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
    int a,b,k;
    cin >> a >> b >> k;
    if( a >= k*b){
        cout << "good" << endl;
    }else{
        cout << "bad" << endl;
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
