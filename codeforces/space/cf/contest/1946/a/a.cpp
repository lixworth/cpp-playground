/*
 * Created by LixWorth on 2024/03/22 22:35
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

const int N = 1e5 + 10;
ll arr[N];
int n;

void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> arr[i];

    sort(arr, arr + n);

    int mid = ceil(n * 1.0 / 2);
    mid -= 1;
    ll mid_value = arr[mid];

    int ans = 0;
    for (int i = mid; i < n; ++i) {
        if (arr[i] == mid_value) ans++;
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
