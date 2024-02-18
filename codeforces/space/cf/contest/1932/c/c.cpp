/*
 * Created by LixWorth on 2024/02/18 20:44
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
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    string input; // n
    cin >> input;

    int l = 0, r = n;
    for (int j = 0; j < n; ++j) {
        ll b = 1;
        for (int i = l; i < r; ++i) {
            b *= a[i];
        }
        cout << b % m << " ";

        if (input[j] == 'L') {
            l++;
        } else { // R
            r--;
        }
    }
    cout << endl;
}

int main() {
    FAST_IO;
    int T;
    cin >> T;
    while (T--) solve();
//    solve();
    return 0;
}
