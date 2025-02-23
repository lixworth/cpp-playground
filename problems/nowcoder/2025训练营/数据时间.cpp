/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;

set<string> c1, c2, c3;

void solve() {
    int n, h, m;
    cin >> n >> h >> m;
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        string uid, date, time;
        cin >> uid >> date >> time;
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        if (year != h || month != m) {
            continue;
        }
        int login = stoi(time.substr(0, 2)) * 60 * 60 + stoi(time.substr(3, 2)) * 60 + stoi(time.substr(6, 2));

        if ((login >= 7 * 60 * 60 && login <= 9 * 60 * 60) || (login >= 18 * 60 * 60 && login <= 20 * 60 * 60)) {
            c1.insert(uid);
        } else if (login >= 11 * 60 * 60 && login <= 13 * 60 * 60) {
            c2.insert(uid);
        } else if (login >= 22 * 60 * 60 || login <= 1 * 60 * 60) {
            c3.insert(uid);
        }
    }

    cout << c1.size() << " " << c2.size() << " " << c3.size() << endl;
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
