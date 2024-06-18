#define ll long long

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
        int d = b[i] - a[i];
        pair<ll, ll> sss(d, i);
        vp.push_back(sss);
    }

    sort(vp.begin(), vp.end(), cmp);

    int ren = n;

    for (int i = n; i <= m; i++) {
        int mx = 0;

        if (ren == 2) {//两个人 //
            int p1 = vp[mx].second;
            int p2 = vp[mx].first;
            sum -= (a[p1] + a[p2]);

            ll oo = max(a[p1] + a[p2], b[p1] + b[p2]);
            sum += oo;
            break;
        }

        if (m - i <= 2) {
            if (vp[mx].first > 0) {
                sum += vp[mx].first;
                mx++;
                ren--;
            } else {
                break;
            }
        } else {
            i++;
            if (i > m)break;
            // if(m-i==2)
            if (vp[mx].first > 0) {
                sum += vp[mx].first;
                mx++;
                ren--;
            } else {
                break;
            }
        }

    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}