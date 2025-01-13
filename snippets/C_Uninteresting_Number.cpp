/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>
#include <vector>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;


void solve() {
    int sum = 0;
    string input;
    cin >> input;

    int v2 = 0, v3 = 0;
    for (auto &item: input) {
        sum += item - '0';
        if (item - '0' == 2) {
            v2++;
        }
        if (item - '0' == 3) {
            v3++;
        }
    }
    if (sum % 9 == 0)
        cout << "YES" << endl;
    else {
        int x = sum % 9;
        if (x == 1 &&) {}
    }
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
