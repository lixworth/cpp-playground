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
const int N = 2e5 + 5;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    map<int, int> mp;
    for (int i = 0; i < n; i++) mp[a[i]]++;
    vector<int> b, c;
    for (auto &[x, y]: mp) {
        // cout<<x<<" "<<y<<endl;
        if (y == 4) {
            // 存在4个x时直接输出
            cout << x << " " << x << " " << x << " " << x << endl;
            return;
        } else if (y == 3) {
            // 3=一对+单个
            b.push_back(x);
            c.push_back(x);
        } else if (y == 2) {
            // 一对
            b.push_back(x);
        } else
            c.push_back(x); // 单个
    }

    if (b.size() == 0) {
        cout << -1 << "" << endl;
        return;
    } else if (b.size() >= 2) {
        cout << b[0] << " " << b[0] << " " << b[1] << " " << b[1] << endl;
        return;
    } else {
        sort(c.begin(), c.end());
        if (c.size() < 2) {
            cout << -1 << "" << endl;
            return;
        }
        for (int i = 0; i < b.size(); i++) {
            int x = 0, y = 1;
            while (y < c.size()) {
                int len = b[i] * 2 + c[x];
                if (len <= c[y]) {
                    x++, y++;
                } else {
                    cout << c[x] << " " << b[i] << " " << b[i] << " " << c[y] << endl;
                    return;
                }
            }
        }
        cout << -1 << "" << endl;
    }
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
