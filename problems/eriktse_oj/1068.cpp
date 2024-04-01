/*
 * Created by LixWorth on 2024/03/31 20:02
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
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;
        x ^= input;
    }
    cout << x << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
