/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <algorithm>
#include <bits/stdc++.h>
#include <cstring>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;

set<int> mmset;
vector<int> arr;

void solve() {
    mmset.clear();
    arr.clear();
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        mmset.insert(x);
        arr.push_back(x);
    }
    if (n % 2 != 0) {
        cout << "No" << endl;
        return;
    }
    if (mmset.size() != 2) {
        cout << "No" << endl;
        return;
    }
    if (count(arr.begin(), arr.end(), *mmset.begin()) == count(arr.begin(), arr.end(), *(--mmset.end()))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
