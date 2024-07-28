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

void solve() {
    int n;
    cin >> n;

    std::string str1, str2;

    int star = true;
    for (int i = n; i > 0; --i) {
        for (int j = 1; j <= n; ++j) {
            if (j % 2 != 0) {
                if (star) {
                    str1 += "##";
                    str2 += "##";
                } else {
                    str1 += "..";
                    str2 += "..";
                }
            } else {
                if (star) {
                    str1 += "..";
                    str2 += "..";
                } else {
                    str1 += "##";
                    str2 += "##";
                }
            }
        }
        star = !star;
        cout << str2 << endl;
        cout << str1 << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}