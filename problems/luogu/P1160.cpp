/*
 * Created by LixWorth on 2024/08/10 01:25
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1e5 + 9;
list<int>::iterator pos[N]; // 记录一下迭代器
bool erased[N]; // 已经清除掉的

// https://www.luogu.com.cn/problem/P1160
// 链表、记录迭代器、去重、find 时间复杂度过高
void solve() {
    list<int> node;
    vector<int> arr;
    node.push_front(1);
    pos[1] = node.begin();
    int n, m;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        int k, p;
        cin >> k >> p; // p0: l p1: r
        if (p == 0) pos[i] = node.insert(pos[k], i);
        else pos[i] = node.insert(next(pos[k]), i);
    }
    cin >> m;
    while (m--) {
        int x;
        cin >> x;
        if (!erased[x]) node.erase(pos[x]), erased[x] = true;
    }

    for (const auto &item: node) {
        cout << item << " ";
    }
}

int main() {
    IOS
    int tt = 1;
//    cin >> tt;
    while (tt--) solve();
    return 0;
}