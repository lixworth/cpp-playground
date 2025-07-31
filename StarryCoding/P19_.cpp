/*
 *  P19 两数之和 StarryCoding
 * Created by LixWorth on 2025/03/02 10:34
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>

#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 2e5 + 9;
int arr[N];

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    sort(arr + 1, arr + n + 1);

    ll cnt = 0;
    int l = 1, r = n - 1;
    while (l != r) {
        if (arr[l] + arr[r] > m) {
            cnt += r - l;
            r--;
        } else {
            l++;
        }
    }
    cout << cnt << endl;
}

int main() {
    IOS int tt = 1;
    //    cin >> tt;
    while (tt--) solve();
    return 0;
}
