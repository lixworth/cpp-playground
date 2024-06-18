/*
 * Created by LixWorth on 2024/03/28 19:22
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

const int N = 1e5 + 10;
int n, k, ans;

int map[N], prefix[N];

void solve() {
    cin >> n >> k;
    for (int i = 1; i < n; ++i) cin >> map[i];
    for (int i = 0; i < n; ++i) {
        prefix[i] = prefix[i - 1] + map[i];
        if (prefix[i] % k == 0) ans++;
    }
    cout << ans << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
