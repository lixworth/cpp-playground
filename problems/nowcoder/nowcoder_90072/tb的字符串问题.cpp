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

const int N = 1e6 + 9;

char arr[4] = {'f', 'c', 't', 'b'};

void solve() {
    int n;
    string str;
    cin >> n >> str;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool check = true;
        for (int j = 0; j < 4; j++) {
            if (str[i] == arr[j]) {
                check = false;
                break;
            }
        }
        if (check) {
            ans++;
            cout << i << " " << str[i] << endl;
        } else {
            check = true;
            for (int j = 0; j < 4; j++) {
                if (str[i + 1] == arr[j]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                ans++;
                cout << i + 1 << " " << str[i + 1] << endl;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    IOS int tt = 1;
    // cin >> tt;
    while (tt--) solve();
    return 0;
}
