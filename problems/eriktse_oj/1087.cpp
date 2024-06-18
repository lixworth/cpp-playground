/*
 * Created by LixWorth on 2024/03/31 21:45
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

const int N = 3e6 + 9;
ll map[N];
int n;

// https://oj.eriktse.com/problem.php?id=1087
// 桶排序
void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        map[x]++;
    }

    for (int i = 0; i <= 2e5; ++i) {
        for (int j = 0; j < map[i]; ++j) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
