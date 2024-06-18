/*
 * Created by LixWorth on 2024/05/10 18:58
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

using namespace std;
using ll = long long;
typedef std::pair<double, double> PDD;

double line_length(PDD p1, PDD p2) { // 求俩点距离
    return sqrt(abs(p1.first - p2.first) * abs(p1.first - p2.first) +
                abs(p1.second - p2.second) * abs(p1.second - p2.second));
}

bool is_(PDD a, std::pair<PDD, PDD> b) {
    return (b.first.second - b.first.second) * 1.0 / (b.first.first - a.first) ==
           ((b.second.second - a.second) * 1.0 / (b.second.first - a.first));
}

double mianji(double a, double b, double c) {
    double p = (a + b + c) * 0.5;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void solve() {
    int n;
    cin >> n;
    vector<pair<double, double>> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i].first >> a[i].second;
    double ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            for (int k = j + 1; k <= n; k++) {
                double s = mianji(line_length(a[i], a[j]), line_length(a[i], a[k]), line_length(a[k], a[j]));
                if (s == 0) continue;
                if (ans == 0) ans = s;
                else ans = std::min(s, ans);
            }
    if (ans == 0) cout << -1 << endl;
    else cout << ans << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
