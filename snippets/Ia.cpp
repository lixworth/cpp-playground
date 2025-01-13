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

const int N = 1e5 + 9;

typedef pair<double, double> PII;
vector<PII> arr;

void merge(vector<PII> &segs) {
    vector<PII> res;

    sort(segs.begin(), segs.end());

    double st = -2e9, ed = -2e9;
    for (auto seg: segs)
        if (ed < seg.first) {
            if (st != -2e9)
                res.push_back({st, ed});
            st = seg.first, ed = seg.second;
        } else
            ed = max(ed, seg.second);

    if (st != -2e9)
        res.push_back({st, ed});

    segs = res;
}

void solve() {
    int n, m;
    cin >> n >> m;
    double a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        int ax, ay, bx, by;
        cin >> ax >> ay >> bx >> by;
        arr.push_back({by * 1.0 / bx, ay * 1.0 / ax});
        if (i == 0) {
            a = by * 1.0 / bx;
        } else {
            a = min(a, by * 1.0 / bx);
        }
        b = max(b, ay * 1.0 / ax);
    }

    merge(arr);

    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        int flag = true;
        double check = y * 1.0 / x;
        if (check < a || check > b) {
            cout << "YES" << endl;
            continue;
        }
        for (auto &item: arr) {
            if (check <= item.second && check >= item.first) {
                cout << "NO" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
