/*
 * Created by LixWorth on 2024/05/12 14:15
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mma = std::min(a, b), mmb = std::max(a, b);
    int mmc = std::min(c, d), mmd = std::max(c, d);

    cout << mma - mmc << " " << mmb - mmd << endl;
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}
