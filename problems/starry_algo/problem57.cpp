/*
 * Created by LixWorth on 2024/03/04 20:19
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

const int N = 2e5+10;

int map[N];

// 二分搜索模板
// https://www.starrycoding.com/problem/57
void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; ++i) cin >> map[i];
    while (q--) {
        int x;
        cin >> x;
        int l = 0, r = n;
        while (l + 1 != r) {
            int mid = (l + r) >> 1;
            if (map[mid] < x) l = mid;
            else r = mid;
        }
        if (map[r] == x) cout << r + 1 << " ";
        else cout << -1 << " ";
    }
}


int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
