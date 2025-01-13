/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>
#define endl "\n"

using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    for (int i = 2; i < n; ++i) {
        ll sum = 0;
        int mmin = arr[0];
        int mmax = 0;
        for (int j = 0; j <= i; ++j) {
            mmin = min(mmin, arr[j]);
            mmax = max(mmax, arr[j]);
            sum += arr[j];
        }
        sum -= mmin + mmax;
        cout << fixed << setprecision(2);
        cout << sum * 1.0 / (i - 1) << endl;
    }
}

int main() {
    int tt = 1;
    //    cin >> tt;
    while (tt--) solve();
    return 0;
}
