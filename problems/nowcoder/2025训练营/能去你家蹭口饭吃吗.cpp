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

const int N = 5e5 + 10;
int arr[N];

// 1 1 1 4 4 5
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    sort(arr + 1, arr + 1 + n);

    if (n == 1)
        cout << arr[1] - 1;
    else {
        cout << arr[n / 2 + 1] - 1 << endl;
    }
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
