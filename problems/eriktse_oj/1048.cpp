/*
 * Created by LixWorth on 2024/04/01 15:53
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

const int N = 2e5 + 9;
int map[N], n, c;

int fun(int mid) {
    int res = 0, pre = -1e9; // 上一个放牛点的位置
    for (int i = 1; i <= n; ++i) {
        if (map[i] - pre >= mid) res++, pre = map[i];
    }
    return res;
}

void solve() {
    cin >> n >> c;
    for (int i = 1; i <= n; ++i) cin >> map[i];
    std::sort(map + 1, map + n + 1);
    int l = 0, r = 1e9 + 10;

    while (l + 1 != r) {
        int mid = (l + r) >> 1;

        if (fun(mid) >= c) l = mid;
        else r = mid;
    }

    cout << l << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
