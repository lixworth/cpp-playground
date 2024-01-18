/*
 * Created by LixWorth on 2024/01/15 22:41
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;

int x1,x2,x3,x4,y12,y2,y3,y4;

void solve() {
    cin >> x1 >> y12 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (x1 == x2) {
        cout << abs(y12 - y2) * abs(y12 - y2) << endl;
    } else if (x2 == x3) {
        cout << abs(y2 - y3) * abs(y2 - y3) << endl;
    } else if (x1 == x4) {
        cout << abs(y12 - y4) * abs(y12 - y4) << endl;
    } else if (x1 == x3) {
        cout << abs(y12 - y3) * abs(y12 - y3) << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}