#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<cstring>
#include<map>
#include<unordered_map>

using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define pii pair<int,int>
#define rep(x, y, z) for(int x=y;x<=z;x++)
#define rrep(x, y, z) for(int x=y;x>=z;x--)
#define umn(a, b) a = min(a, b)
#define umx(a, b) a = max(a, b)

const int N = 1e6 + 10;

int main() {
    IOS
    int n;
    cin >> n;
    ll exh = 0;
    ll sum = 0;
    vector<pair<long long, long long>> v(n);
    rep(i, 0, n - 1) {
        long long d;
        cin >> d;
        v[i] = make_pair(d, i + 1);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (v[i].second - exh > 0) {
            sum += (v[i].second - exh) / v[i].first;
            exh += ((v[i].second - exh) / v[i].first) * v[i].first;
        }
    }
    cout << sum << endl;
}