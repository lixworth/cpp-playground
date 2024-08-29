/*
 * Created by LixWorth on 2024/08/21 14:02
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

map<int, int> mmap;

void solve() {
    mmap.clear();
    int n;
    cin >> n;
    int mmax = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        mmap[x]++;
        mmax = max(mmax, mmap[x]);
    }

    cout << n - mmax << endl;
}

int main() {
    IOS
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}