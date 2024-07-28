/*
 * Created by LixWorth on 2024/03/11 23:38
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

const int N = 1000;

int n, m, k;
vector<int> a, b;

void solve() {
    cin >> n >> m >> k;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < k) {
            a.push_back(x);
        }
    }
    int count = 0;
    for (int i = 0; i < m; ++i) {
        int x;
        cin >> x;
        if (x < k) {
            b.push_back(x);
        }
    }

    for (auto i: a) {
        for (auto j: b) {
            if (i + j <= k) count++;
        }
    }
    cout << count << endl;

    a.clear();
    b.clear();
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
