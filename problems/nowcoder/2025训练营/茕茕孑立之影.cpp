/*
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

const int N = 1e5 + 10;
int arr[N];
void solve() {
    int n;
    cin >> n;
    int mmin = 1e9, mmax = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mmin = min(mmin, arr[i]);
        mmax = max(mmax, arr[i]);
    }
    if (mmin == 1) {
        cout << -1 << endl;
        return;
    }
    int ans = mmax + 1;

    int flag = true;
    while (true) {
        for (int i = 0; i < n; ++i) {
            if (ans % arr[i] == 0) {
                ans++;
                flag = true;
                break;
            } else {
                flag = false;
            }
        }
        if (!flag) {
            cout << ans << endl;
            break;
        }
    }
}
int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
