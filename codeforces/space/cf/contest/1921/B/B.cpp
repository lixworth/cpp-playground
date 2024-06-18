/*
 * Created by LixWorth on 2024/01/15 23:43
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s, f;
    cin >> s >> f;

    if (s == f) {
        cout << 0 << endl;
        return;
    }

    int a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0' && f[i] == '1') {
            a++;
        } else if (s[i] == '1' && f[i] == '0') {
            b++;
        }
    }
    cout << min(a, b) + abs(a - b) << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}