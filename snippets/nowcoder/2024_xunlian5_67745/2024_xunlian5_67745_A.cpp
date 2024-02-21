/*
 * Created by LixWorth on 2024/02/21 13:27
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>

#define FAST_IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;

        if (input != 1) {
            ans++;
        }
    }

    cout << ans << endl;
}

int main() {
    FAST_IO;
//    int T;
//    cin >> T;
//    while (T--) solve();
    solve();
    return 0;
}
