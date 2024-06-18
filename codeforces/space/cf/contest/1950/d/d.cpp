/*
 * Created by LixWorth on 2024/03/28 22:49
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

std::vector<int> map{};

void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "YES" << endl;
        return;
    }
    if (std::find(map.begin(), map.end(), n) != map.end()) {
        cout << "YES" << endl;
        return;
    }
    for (int item: map) {
        while (n % item == 0) n /= item;
    }

    if (n == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    FAST_IO;

    for (int i = 2; i < 1e5 + 9; ++i) {
        int curr = i;
        bool check = false;

        while (curr) {
            if (curr % 10 > 1) {
                check = true;
                break;
            }
            curr /= 10;
        }
        if (!check) map.push_back(i);
    }

    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
