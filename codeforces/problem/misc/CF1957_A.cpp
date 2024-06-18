/*
 * Created by LixWorth on 2024/04/22 19:06
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

const int N = 109;

int arr[N], cnt[N];

// https://codeforces.com/contest/1957/problem/A
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += cnt[arr[i]] / 3;
        cnt[arr[i]] = 0;
    }
    cout << ans << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
