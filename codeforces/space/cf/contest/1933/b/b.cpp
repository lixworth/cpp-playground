/*
 * Created by LixWorth on 2024/03/22 19:19
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

const int N = 1e5 + 10;
//ll arr[N];
vector<ll> arr;
int handle_remove, handle_add;
int n;

void solve() {
    ll sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr.push_back(x);
//        arr[i] = x;
        sum += arr[i];
    }
    if (sum % 3 == 0) {
        cout << 0 << endl;
        return;
    }
    handle_remove = sum % 3; // 减去多少
    handle_add = 3 * (sum / 3 + 1) - sum; // 加上多少

    for (auto &item: arr) {
        if (item > handle_remove) {
            cout << handle_remove << endl;
            return;
        }
    }

    cout << std::min(1, handle_add) << endl;
    arr.clear();
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
