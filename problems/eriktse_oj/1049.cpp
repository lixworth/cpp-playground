/*
 * Created by LixWorth on 2024/03/30 14:18
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

const int N = 1e5 + 9;
int n, q, l, r, map[N];
ll prefix[N]; // 存储前缀和

// https://oj.eriktse.com/problem.php?id=1049
void solve() {
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> map[i];
    for (int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + map[i];

    cin >> q;
    while (q--) {
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
