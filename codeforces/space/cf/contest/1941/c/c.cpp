/*
 * Created by LixWorth on 2024/03/12 00:14
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

void solve() {
    int n;
    string input;
    cin >> n >> input;

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (input[i] == 'm' && input[i + 1] == 'a' && input[i + 2] == 'p' && input[i + 3] == 'i' &&
            input[i + 4] == 'e') {
            ans++;
            i += 4;
        } else {
            if (input[i] == 'm' && input[i + 1] == 'a' && input[i + 2] == 'p') {
                ans++;
            }
            if (input[i] == 'p' && input[i + 1] == 'i' && input[i + 2] == 'e') {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
