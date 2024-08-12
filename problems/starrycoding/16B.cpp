/*
 * Created by LixWorth on 2024/08/12 08:22
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 100;
int arr[N];

void solve() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; ++i) cin >> arr[i];

    sort(arr, arr + n);

    int mmin = arr[n - 1] - arr[0];
    for (int i = 0; i + k - 1 < n; ++i) {
        mmin = min(mmin, arr[i + k - 1] - arr[i]);
    }
    cout << mmin << endl;
}

int main() {
    IOS
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}