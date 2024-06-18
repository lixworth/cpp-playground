/*
 * Created by LixWorth on 2024/03/24 19:35
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

using namespace std;

using ll = long long;

const int N = 1e5 + 10;
ll n, k;
ll arr[N];
int ans;

void solve() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (i > 0 && i < n - 1) {
            if (abs(arr[i] - arr[i - 1]) != k) {
                ans++;
            }
        }
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
