/*
 * Created by LixWorth on 2024/03/13 19:44
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
    string s;
    cin >> n >> s;
    int end = 0, start = 1; // 结束后剩多少 开始一行是多少

    for (int i = 1; i < n / 2; i = i + 2) { // 1 3 5
        int test = 0;
        for (int j = i; j > 1; j = j - 2) {
            test += j;
        }
        if ((test * 2) + 1 > n) break;
        else {
            start = i;
            end = n - test * 2 - 1;
        }
    }

    for (int i = start; i > 1; i = i - 2) {
        for (int j = 0; j < (start - i) / 2; ++j) cout << " ";
        for (int j = 0; j < i; ++j) cout << s;
        cout << endl;
    }
    for (int i = 1; i <= start; i = i + 2) {
        for (int j = 0; j < (start - i) / 2; ++j) cout << " ";
        for (int j = 0; j < i; ++j) cout << s;
        cout << endl;
    }
    cout << end << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
