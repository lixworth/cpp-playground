/*
 * Created by LixWorth on 2024/01/13 22:59
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
    int n, k, x;
    cin >> n >> k >> x;
    int map[n];
    ll count = 0;
    for (int i = 0; i < n; ++i) cin >> map[i];
    sort(map, map + n);
    for (int i = 0; i < x; ++i) {
        map[n - 1 - i] *= -1;
    }
    for (int i = 0; i < n; ++i) count += map[i];

    ll test = count;

    for (int i = 0; i < k; ++i) {
        test -= map[n - 1 - i];
        if (n - 1 - x - i >= 0) {
            map[n - 1 - x - i] *= -1;
            test += 2 * map[n - 1 - x - i];
        }
        test = max(test, count);
    }
    cout << test << endl;
}

int main(){
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}