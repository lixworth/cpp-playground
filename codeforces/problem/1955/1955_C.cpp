/*
 * Created by LixWorth on 2024/04/08 23:16
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

const int N = 2e5 + 9;
ll n, k, map[N];
std::deque<ll> dq;
ll prefix[N];

void solve() {
    dq.clear();
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        ll _;
        cin >> _;
        dq.push_back(_);
    }
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) map[i] = dq.front(), dq.pop_front();
        else map[i] = dq.back(), dq.pop_back();
    }
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + map[i];
        if (prefix[i] > k) {
            cout << i - 1 << endl;
            return;
        }
    }
    cout << n << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
