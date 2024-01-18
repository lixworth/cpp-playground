/*
 * Created by LixWorth on 2024/01/18 23:18
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string a,b,c;
    cin >> a >> b >> c;

    for (int i = 0; i < n; ++i) {
        if(c[i] != b[i] && c[i] != a[i]){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
