/*
 * Created by LixWorth on 2024/02/18 20:05
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define FAST_IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);

using namespace std;

typedef long long ll;

void solve() {
    int t;
    string input;
    cin >> t >> input;

    int count = 0;
    for (int i = 0; i < t; ++i) {
        // . @ *
        if(input[i] == '*' && input[i+1] == '*'){
            break;
        }
        if(input[i] == '@') count++;
    }

    cout << count << endl;
}

int main() {
    FAST_IO;
    int T;
    cin >> T;
    while (T--) solve();
//    solve();
    return 0;
}
