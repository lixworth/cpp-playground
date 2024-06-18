/*
 * Created by LixWorth on 2024/04/07 19:52
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

const int N = 1e5 + 9;

ll map[N];
std::vector<ll *> ptr;

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> map[i];
        ptr.push_back(&map[i]);
    }
    ll *max = std::max_element(map, map + n);
    ll *min = std::min_element(map, map + n);

    if (max == min) {
        if (std::find(ptr.begin(), ptr.end(), max) == std::find(ptr.begin(), ptr.end(), min)) {

        }
    }
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
