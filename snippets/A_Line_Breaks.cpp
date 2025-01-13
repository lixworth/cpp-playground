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

int arr[100000];

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        string input;
        cin >> input;

        arr[i] = input.size();
    }

    int size = 0;

    bool check = true;
    for (int i = 0; i < n; ++i) {
        size += arr[i];
        if (size == m) {
            cout << i + 1 << endl;
            check = false;
            break;
        } else if (size > m) {
            cout << i << endl;
            check = false;
            break;
        }
    }

    if (check)
        cout << n << endl;
}

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
}
