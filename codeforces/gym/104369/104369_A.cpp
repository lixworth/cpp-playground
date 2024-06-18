/*
 * Created by LixWorth on 2024/04/27 13:03
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

std::vector<int> black_list;

void solve() {
    black_list.clear();
    int start, n;
    cin >> start >> n;
    for (int i = 0; i < n; ++i) {
        int black;
        cin >> black;
        black_list.push_back(black);
    }
    int end;
    cin >> end;
    int cnt = 0;
    for (auto item: black_list) {
        if (item >= start && item < end) cnt++;
    }
    cout << end - start + 1 - cnt << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
