/*
 * Created by LixWorth on 2024/04/01 15:37
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
int map[N];

// https://oj.eriktse.com/problem.php?id=1088
void solve() {
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; ++i) cin >> map[i];

    while (q--) {
        int x;
        cin >> x;

        int l = 0, r = n;

        while (l + 1 != r) {
            int mid = (l + r) >> 1; // = (l+r)/2 向下取整
            if (map[mid] < x) l = mid;
            else r = mid;
        }

        if (map[r] == x)cout << r << ' ';
        else cout << -1 << ' ';
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
