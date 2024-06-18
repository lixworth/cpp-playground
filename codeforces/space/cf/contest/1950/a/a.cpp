/*
 * Created by LixWorth on 2024/03/28 22:45
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

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c && a < c) {
        cout << "STAIR" << endl;
    } else if (a < b && b > c) {
        cout << "PEAK" << endl;
    } else {
        cout << "NONE" << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
