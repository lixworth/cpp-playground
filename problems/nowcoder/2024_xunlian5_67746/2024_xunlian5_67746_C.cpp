/*
 * Created by LixWorth on 2024/02/23 16:30
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
//#include <algorithm>
#include <cmath>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

void solve() {
    string input1, input2;
    cin >> input1 >> input2;
    int r = 0, p = 0;
    // y 局 x 胜
    int y = stoi(input1.substr(2, input1.size() - 1));
    int x = ceil(y*1.0 / 2);
    for (int i = 0; i < input2.length(); ++i) {
        if (input2[i] == 'R') r++;
        else p++;
        if (r == x) cout << "kou!" << endl;
        if (p == x) cout << "yukari!" << endl;
        if (r == x || p == x) {
            cout << i + 1 << endl;
            return;
        }
        if(i >= y){
            break;
        }
    }
    cout << "to be continued." << endl;
    cout << input2.length() << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
