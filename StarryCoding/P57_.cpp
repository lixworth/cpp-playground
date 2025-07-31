/*
 *  P57 查找 StarryCoding
 * Created by LixWorth on 2025/02/28 11:21
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
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    while (q--) {
        int x;
        cin >> x;

        int l = 0, r = n + 1;
        while (l + 1 < r) {
            int mid = (l + r) >> 1;

            if (arr[mid] < x)
                l = mid;
            else
                r = mid;
        }

        if (arr[r] == x)
            cout << r << " ";
        else
            cout << -1 << " ";
    }
}

int main() {
    IOS int tt = 1;
    //    cin >> tt;
    while (tt--) solve();
    return 0;
}
