/*
 * Created by LixWorth on 2024/02/21 13:35
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
    int n,x;
    cin >> n >> x;

    if((x+n)%2 == 0 && n-(x+n)/2 >= 0 && (x+n)/2 >= 0){
        cout << (x+n)/2 << " " << n-(x+n)/2<< endl;
    }else{
        cout << -1 << endl;
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
