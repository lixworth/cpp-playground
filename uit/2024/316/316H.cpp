/*
 * Created by LixWorth on 2024/03/16 18:36
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

ll n;
string input;
ll map[100000];

void solve() {
    cin >> n >> input;
    ll sum = 0;
    for (auto item: input) {
        map[item + 1]++;
        map[item - 1]++;
        if (map[item] != 0) {
            sum += map[item];
        }
    }
    cout << sum << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
