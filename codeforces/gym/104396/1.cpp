#include<iostream>
#include<algorithm>
#include<list>
#include<utility>

#define ll long long
#define IOS std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using std::max;
using std::min;
using std::cin;
using std::cout;
using std::endl;
using std::sort;

const int N = 5e5 + 10;
const int M = 1e9 + 10;
ll a[N];
ll path[M];
std::pair<ll, ll> pr[N];
std::pair<ll, ll> cut[N];

void solve() {
    ll n, m;
    cin >> n >> m;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> pr[i].first >> pr[i].second;
        sum += pr[i].first;
        pr[i].second = i;
        cut[i].first = pr[i].first - pr[i].second;
        cut[i].second = i;
    }
    sort(cut, cut + n);
    int idx = 1;
    for (int i = 1; i <= m - n; i++) {
        if (cut[idx].first >= 0) idx++;
        else {
            sum -= pr[cut[idx].second].first;
            sum += pr[cut[idx].second].second;
            idx++;
        }
    }
    cout << sum << endl;
}


int main() {
    IOS
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}
