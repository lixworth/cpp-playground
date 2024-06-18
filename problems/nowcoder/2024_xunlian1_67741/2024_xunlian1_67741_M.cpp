/*
 * Created by LixWorth on 2024/02/02 13:21
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
    ll n;
    cin >> n;
    if (n <= 6) {
        cout << 1 << endl;
        return;
    }
    if (n % 6 == 0) {
        cout << n / 6 << endl;
    } else {
        cout << (n / 6) * 2 << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
