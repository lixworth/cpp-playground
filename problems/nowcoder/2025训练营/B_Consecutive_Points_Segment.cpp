#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
int arr[N];

void solve() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) cin >> arr[i];

    int cnt = 0;
    for (int i = 0; i < n - 1; ++i) cnt += arr[i + 1] - arr[i] - 1;
    if (cnt > 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
