#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const int N = 110;
ll n, k;
ll t[N], l[N], w[N];

bool check(ll T) {
    ll Test = 0;
    for (int i = 0; i < n; i++) {
        ll round = l[i] * t[i] + w[i];
        ll n_round = T / round;
        Test += n_round * l[i];
        ll t_extra = T - n_round;
        Test += min(t_extra / t[i], l[i]);
    }
    return Test >= k;
}

void slove() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> t[i] >> l[i] >> w[i];
    ll le = 0, ri = 3e18;
    while (le < ri) {
        ll mid = le + ri >> 1;
        if (check(mid))
            ri = mid;
        else
            le = mid + 1;
    }
    cout << le << endl;
}
int main() {
    int t;
    cin >> t;
}
