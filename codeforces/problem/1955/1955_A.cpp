/*
 * Created by LixWorth on 2024/04/08 22:43
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
    int n, a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    if (a * 2 > b) {
        cnt += n / 2 * b;
        cnt += n % 2 * a;
    } else {
        cnt += n * a;
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
