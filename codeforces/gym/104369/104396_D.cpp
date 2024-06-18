#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

ll a[500100];
ll b[500100];

bool cmp(pair<ll, ll> aa, pair<ll, ll> bb) { return aa.first > bb.first; }

void solve() {
    ll n, m;
    cin >> n >> m;
    ll sum = 0;
    vector<pair<ll, ll>> vp;//second 指针 first 差值

    for (int i = 1; i <= n; i++) {
        cin >> a[i] >> b[i];
        sum += a[i];
        ll d = b[i] - a[i];
        pair<ll, ll> sss(d, i);
        vp.push_back(sss);
    }

    if (n == 1) {
        cout << b[1];
        return;
    }
    sort(vp.begin(), vp.end(), cmp);

    ll ren = n;
    int mx = 0;

    for (ll i = n + 1; i <= m; i++) {
        if (i > 3 * n) break;

        if (ren == 2 && m - i >= 0) { //两个人 // 应该是大于等于1，因为i加过一次了
            ll p1 = vp[mx].second;
            ll p2 = vp[mx + 1].second;
            sum -= (a[p1] + a[p2]);

            ll oo = max(a[p1] + a[p2], b[p1] + b[p2]);
            sum += oo;
            break;
        }

        if (vp[mx].first > 0) {
            sum += vp[mx].first;
            mx++;
            if (mx > vp.size()) break;
            ren--;
        } else {
            break;
        }
    }
    cout << sum << '\n';
}

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}