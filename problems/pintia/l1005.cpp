/*
 * Created by LixWorth on 2024/03/13 20:30
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
#include <map>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

int n, m;
map<ll, pair<string, ll>> m0;

void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string input;
        ll id, id1;
        cin >> input >> id >> id1;
        m0[id].first = input;
        m0[id].second = id1;
    }
    cin >> m;
    while (m--) {
        int query;
        cin >> query;
        cout << m0[query].first << " " << m0[query].second << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
