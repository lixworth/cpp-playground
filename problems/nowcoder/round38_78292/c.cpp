/*
 * Created by LixWorth on 2024/03/24 19:11
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

using namespace std;

using ll = long long;

int n, k;
string str;

void solve() {
    cin >> n >> k;
    char start = 'a';
    for (int i = 0; i < k; ++i) {
        str += start;
        str += start;

        if (start == 'z') start = 'a';
        else start++;
    }
    for (int i = 0; i < n - k * 2; ++i) {
        str += start;

        if (start == 'z') start = 'a';
        else start++;
    }
    cout << str << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}