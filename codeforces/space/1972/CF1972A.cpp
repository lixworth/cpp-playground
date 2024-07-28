
/*
 * Created by LixWorth on 2024/04/30 23:14
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

std::deque<ll> a, b;

void solve() {
    a.clear(), b.clear();
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        ll tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < n; ++i) {
        ll tmp;
        cin >> tmp;
        b.push_back(tmp);
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            a.push_front(b[i]);
//            a.pop_back();n
            cnt++;
            i = 0;
        }
    }
    cout << cnt << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
