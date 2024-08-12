/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 1000;
int arr[N];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        arr[x] = i;
    }
    for (int i = 1; i <= n; ++i) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    IOS
    int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}