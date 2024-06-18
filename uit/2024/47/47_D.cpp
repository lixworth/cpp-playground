/*
 * Created by LixWorth on 2024/04/07 19:35
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
const int N = 1e5;

ll map[N];
ll data[N];
ll ans[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> map[i];
    }
    for (int i = 2; i <= n; ++i) {
        if (i + 1 > n) break;
        if (abs(map[i - 1] - map[i + 1]) == 1) {
            ans[i - 1] = map[i - 1];
            ans[i + 1] = map[i + 1];
        } else {
            cout << map[i] << endl;
        }
    }
    cout << " ===" << endl;
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
