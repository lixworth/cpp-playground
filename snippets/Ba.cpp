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
int arr[N];
void solve() {
    int n;
    string s, t;
    cin >> n >> s >> t;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == t[i]) {
            cnt++;
            arr[i] = 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j)
                continue;
            if (s[i] == t[j]) {
                if (arr[i] == 0) {
                    cnt++;
                    arr[i] = 1;
                }
            }
        }
    }

    cout << cnt << endl;
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
