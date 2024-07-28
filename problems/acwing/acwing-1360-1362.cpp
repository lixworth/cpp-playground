/*
 * Created by LixWorth on 2024/03/26 20:29
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

//using namespace std;
using std::cin, std::cout;
using ll = long long;

ll gcd(ll x, ll y) {
    return y == 0 ? x : gcd(y, x % y);
}

ll lcm(ll x, ll y) {
    return x / gcd(x, y) * y;
}

const int N = 160;

typedef std::pair<int, int> PII; // first=x second=y
PII map[N * N];
int n;
int cnt;

bool cmp(PII a, PII b) {
    return a.second * b.first < b.second * a.first;
//    return a.second / a.first < b.second / b.first;
    // ay/ax <  by/bx
    // ay*bx/ax*bx < by*ax/ax*bx
}

// https://www.acwing.com/problem/content/1362/
// 暴力做法
void solve() {
    cin >> n;

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (gcd(i, j) == 1) { // 互质
                map[cnt] = {i, j};
                cnt++;
            }
        }
    }

    std::sort(map, map + cnt, cmp);

    for (int i = 0; i < cnt; ++i) {
        cout << map[i].second << "/" << map[i].first << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
