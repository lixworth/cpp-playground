/*
 * Created by LixWorth on 2024/04/08 22:48
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

const int N = 1000;
int n, c, d;
std::vector<ll> map;
ll tmp[N][N];

void solve() {
    map.clear();
    cin >> n >> c >> d;
    ll min = 0;
    for (int i = 0; i < n * n; ++i) {
        ll input;
        cin >> input;
        if (i == 0) min = input;
        else min = std::min(min, input);
        map.push_back(input);
    }
    tmp[0][0] = min;
    for (int i = 1; i < n; ++i) {
        tmp[0][i] = tmp[0][i - 1] + d;
        tmp[i][0] = tmp[i - 1][0] + c;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            tmp[i][j] = tmp[i][j - 1] + d;
        }
    }

    std::vector<ll> v;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (std::find(map.begin(), map.end(), tmp[i][j]) == map.end()) {
                cout << "NO" << endl;
                return;
            }
            v.push_back(tmp[i][j]);
        }
    }
    std::sort(v.begin(), v.end());
    std::sort(map.begin(), map.end());
    if (v == map) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
