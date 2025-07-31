#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int N = 1e5 + 10;
int arr[N];
ll prefix[N];

void solve() {
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; ++i) cin >> arr[i];
    for (int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + arr[i];

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
}

int main() {
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
