/*
 * Created by LixWorth on 2024/05/12 14:15
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
    std::string input;
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    for (int i = 1; i <= 12; ++i) {
        if (i == a1 || i == a2) input += "a";
        if (i == b1 || i == b2) input += "b";
    }

    if (input == "abab" || input == "baba") cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
