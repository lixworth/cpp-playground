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

const int N = 2e5 + 9;
ll arr[N];

void solve() {
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % n == 0) {
        ll s = sum / n;
        for (int i = 1; i < n - 1; ++i) {
            if (arr[i - 1] < s) {
                arr[i + 1] -= s - arr[i - 1];
                arr[i - 1] = s;
            } else if (arr[i - 1] > s) {
                arr[i + 1] += arr[i - 1] - s;
                arr[i - 1] = s;
            }
        }
        if (arr[0] == arr[n - 1])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    } else
        cout << "NO" << endl;
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
