/*
 * Created by LixWorth on 2024/05/12 14:09
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
    cin >> input;

    bool check = true;
    for (int i = 1; i < input.length(); ++i) {
        if (input[i] != input[i - 1]) {
            std::swap(input[i], input[i - 1]);
            check = false;
            break;
        }
    }
    if (check) cout << "NO" << endl;
    else cout << "YES" << endl << input << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
