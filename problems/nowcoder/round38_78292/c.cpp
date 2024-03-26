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
    char end = 'z';
    int num = 1;
    int count = 0;
    while (true) {
        if (num <= k) {
            num += (num + 1);
            count++;
        } else {
            break;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (count != 0 && i >= 1 && i <= count) {
            str += start;
        } else if (extra != 0 && i >= n - extra) {
            str += start;
        } else {
            start++;
            if (start > end) {
                start = 'a';
            }
            str += start;
        }
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
