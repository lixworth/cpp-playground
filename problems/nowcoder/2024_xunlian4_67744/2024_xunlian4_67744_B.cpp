/*
 * Created by LixWorth on 2024/02/19 13:14
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

int map[200000];

void solve() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> map[i];
        count += map[i]-1;
    }

    if(count%2 == 0){
        cout << "sweet\n";
    }else{
        cout << "gui\n";
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
