/*
 * Created by LixWorth on 2024/03/16 13:41
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
#include <vector>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

vector<string> msg{"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

void solve() {
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == '-')cout << "fu";
        else cout << msg[input[i] - 48];
        if (i != input.length() - 1) cout << " ";
        else cout << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}
