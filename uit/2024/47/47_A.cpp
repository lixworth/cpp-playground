/*
 * Created by LixWorth on 2024/04/07 19:04
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

std::string map[10];

void solve() {
    for (int i = 0; i < 5; ++i) {
        getline(cin, map[i]);
    }

    int a, b;
    a = map[1][0] - '0', b = map[3][0] - '0';
    if (map[2][5] == '&') {
        cout << (a && b) << endl;
    } else if (map[2][5] == '=') {
        cout << (a || b) << endl;
    } else {
        cout << !(map[2][0] - '0') << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
