/*
 * Created by LixWorth on 2024/03/22 19:14
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

const int N = 50;
int n;
//int arr[N];

void solve() {
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < 0) ans -= x;
        else ans += x;
    }
    cout << ans << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
