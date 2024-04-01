/*
 * Created by LixWorth on 2024/03/31 20:24
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

const int N = 2e5;
int n;
std::vector<int> map;

void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        map.push_back(x);
    }

    std::sort(map.begin(), map.end());

    map.erase(std::unique(map.begin(), map.end()), map.end()); // 去重
    for (auto &item: map) cout << item << " ";
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
