/*
 * Created by LixWorth on 2024/02/02 13:06
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int check(int n,string input,string str) {
    int i = 0, j = 0;
    for (i = 0, j = 0; i < n && j < str.length(); ++i) {
        if (input[i] == str[j]) {
            j++;
        }
    }
    return j == str.length() ? 1 : 0;
}
void solve() {
    int n;
    string input;
    cin >> n >> input;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
