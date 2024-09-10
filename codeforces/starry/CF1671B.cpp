/*
 * Created by LixWorth on 2024/04/29 20:54
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>

#define FAST_IO                       \
    std::ios::sync_with_stdio(false); \
    std::cin.tie(nullptr);            \
    std::cout.tie(nullptr);
#define endl "\n"

// using namespace std;
using std::cin, std::cout;
using ll = long long;

const int N = 2e5;
int arr[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> arr[i]; }

    int cnt = 0; // 计算空隙 如果总空隙>2将无法移动
    for (int i = 1; i < n; ++i) { cnt += arr[i] - arr[i - 1] - 1; }

    if (cnt > 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
