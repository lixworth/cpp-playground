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

const int N = 10000;
int hash_data[N];
queue<int> mem;

// https://www.luogu.com.cn/problem/P1540
// 队列
void solve() {
    int m, n;
    cin >> m >> n;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;
        if (hash_data[input] == 0) {
            cnt++;
            mem.push(input);
            hash_data[input] = 1;
        }
        if (mem.size() > m) {
            hash_data[mem.front()] = 0;
            mem.pop();
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
