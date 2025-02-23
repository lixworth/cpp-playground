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

int arr[10000];
void solve() {
    string input;
    cin >> input;
    for (auto &item: input) { arr[item]++; }

    if (arr[99] == 1 && arr[100] == 1 && arr[101] == 1 && arr[110] == 1 && arr[111] == 2 && arr[114] == 1 &&
        arr[119] == 1)
        cout << "happy new year" << endl;
    else
        cout << "I AK IOI" << endl;
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
