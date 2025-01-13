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
ll arr[10000];
ll amap[10000];
vector<int> vlist;

void solve() {
    vlist.clear();
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> arr[i]; }

    sort(arr, arr + n);
    ll ans = 0;
    if (arr[0] == arr[n - 1])
        cout << 0 << endl;
    else {
        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; ++i) {
                vlist.push_back(arr[i]);
                vlist.push_back(arr[n - 1 - i]);
            }
        } else {
            for (int i = 0; i < n / 2 + 1; ++i) {
                vlist.push_back(arr[i]);
                vlist.push_back(arr[n - 1 - i]);
            }
        }
        for (int i = 0; i < n - 1; ++i) { ans += vlist[i + 1] - arr[i]; }
        cout << ans << endl;
    }
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
