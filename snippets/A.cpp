#/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    string input;
    bool check = true;
    for (int i = 0; i < n; ++i) {
        int a, b;
        char b1;
        cin >> a >> b1;
        if (b1 == 'A')
            b = 10;
        else
            b = b1 - '0';

        if (b % 4 != 0 && b % 5 != 0 && b != 1) {
            check = false;
        }
    }
    if (check)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
