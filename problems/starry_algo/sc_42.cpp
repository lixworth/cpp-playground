/*
 * Created by LixWorth on 2024/03/21 20:11
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

const int N = 60;

int arr[N];
vector<int> v[N];

void dfs(int x) {
    cout << x << " ";
    for (auto &item: v[x]) {
        dfs(item);
    }
}

void bfs(int st) {
    queue<int> q;
    q.push(st);
    while (q.size()) {
        int x = q.front();
        q.pop();

        cout << x << " ";
        for (auto &item: v[x]) {
            q.push(item);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i) cin >> arr[i];
    for (int i = 2; i <= n; ++i) v[arr[i]].push_back(i);
    for (int i = 1; i <= n; ++i) sort(v[i].begin(), v[i].end());

    dfs(1);
    cout << endl;
    bfs(1);
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
