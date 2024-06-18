/*
 * Created by LixWorth on 2024/02/07 13:09
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

int map[1000];

void solve() {
    int n;
    cin >> n;
    if(n < 2){
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n; ++i) {
        cin >> map[i];
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(j == i) continue;
            if((map[i]*10+map[j])%36 == 0) {
                count++;
            }
        }
    }

    cout << count << endl;
}

int main() {
    FAST_IO;
//    int T;
//    cin >> T;
//    while (T--)solve();
    solve();
    return 0;
}
