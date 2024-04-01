/*
 * Created by LixWorth on 2024/03/31 19:44
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

//using namespace std;
using std::cin, std::cout;
using ll = long long;

int n;

// https://oj.eriktse.com/problem.php?id=1067
void solve() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        ll input;
        cin >> input;

        int ans = 0;
        while (input) {
            if (input & 1) ans++;
            // 每次于 000001 相比较，也就是比较最后一位是否为1
            input >>= 1; // 向右移一位1
        }

        cout << ans << " ";
    }

    cout << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
