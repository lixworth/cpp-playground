/*
 * Created by LixWorth on 2024/04/27 13:29
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

//using namespace std;
using std::cin, std::cout;
using ll = long long;

std::vector<std::pair<ll, ll>> arr;

bool cmp(std::pair<ll, ll> x, std::pair<ll, ll> y) {
    return x.first < y.first;
}

void solve() {
    arr.clear();
    ll n;
    cin >> n;
    ll cnt = 0, tmp = 0;// 交易总数
    for (ll i = 0; i < n; ++i) {
        ll x, y;
        cin >> x >> y;
        std::pair<ll, ll> data;
        data.first = x, data.second = y;
        cnt += data.second;
        arr.push_back(data);
    }

    std::sort(arr.begin(), arr.end(), cmp);

    ll ans = 0;
    tmp = cnt;
    if (tmp % 2 != 0)tmp--;
    cnt = tmp / 2;
    for (auto &item: arr) {
        if (cnt > item.second) {
            ans -= item.first * item.second;
            cnt -= item.second;
            item.second = 0;
        } else {
            ans -= item.first * cnt;
            item.second -= cnt;
            cnt = 0;
        }
        if (cnt == 0) break;
    }

    std::reverse(arr.begin(), arr.end());
    cnt = tmp / 2;
    for (auto &item: arr) {
        if (cnt > item.second) {
            ans += item.first * item.second;
            cnt -= item.second;
            item.second = 0;
        } else {
            ans += item.first * cnt;
            cnt = 0;
            break;
        }
    }
    cout << ans << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
