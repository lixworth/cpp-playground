/*
 * Created by LixWorth on 2024/01/19 00:09
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll comb(ll n, ll m)
{
    if (m == 0 || m == n)
    {
        return 1;
    }
    else
    {
        return comb(n - 1, m - 1) + comb(n - 1, m);
    }
}

void solve() {
    ll n;
    cin >> n;
    ll map[n];
    for (ll i = 0; i < n; ++i) cin >> map[i];

    if (n < 3) {
        cout << 0 << endl;
        return;
    }
    sort(map, map + n);

    if (map[n - 1] == map[0]) {
        cout << comb(n, 3) << endl;
        return;
    }
    ll count = 0;

    for (int i = 0; i < n - 2; i++) {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; j++) {
            while (k < n && map[i] + map[j] > map[k]) {
                k++;
            }
            count += (k - j - 1);
        }
    }

    cout << count << endl;
}

int main() {
    ll T;
    cin >> T;
    while (T--) solve();
    return 0;
}
