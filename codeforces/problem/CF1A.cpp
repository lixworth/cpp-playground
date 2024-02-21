/*
 * Created by LixWorth on 2024/02/20 10:39
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
    ll n,m,a;
    cin >> n >> m >> a;
    cout << (n%a == 0 ? n/a : n/a+1) * (m%a == 0 ? m/a : m/a+1) << endl;
}

int main() {
    FAST_IO;
//    int T;
//    cin >> T;
//    while (T--) solve();
    solve();
    return 0;
}
