/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

// https://www.luogu.com.cn/problem/P1996
// dsa 链表 list
void solve() {
    int n, m;
    cin >> n >> m;
    list<int> node;
    for (int i = 1; i <= n; ++i) node.push_back(i);
    auto it = node.begin();

    while (node.size() != 1) {
        for (int i = 0; i < m - 1; ++i) {
            it++;
            if (it == node.end()) it = node.begin();
        }
        cout << *it << " ";
        it++;
        auto next = it;
        if (next == node.end()) next = node.begin();
        it--;
        node.erase(it);
        it = next;
    }
    cout << *node.begin() << endl;
}

int main() {
    IOS
    int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}