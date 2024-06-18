/*
 * Created by LixWorth on 2024/03/23 21:16
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

using namespace std;

using ll = long long;

int n, m;
string x, s;

void solve() {
    cin >> n >> m >> x >> s;
    int count = 0;

    while (x.find(s) == string::npos) {
        x += x;
        count++;
        if (x.length() > s.length() * 10 && x.find(s) == string::npos) {
            cout << -1 << endl;
            return;
        }
    }

    cout << count << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
