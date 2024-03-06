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
    int p = 0;
    for (int i = 0; i < n; ++i) {
        if(input[i] == str[p]){
            p++;
        }
        if(p == 3) break;
    }
    return p == 3 ? 1 : 0;
}

void solve() {
    int n;
    string input;
    cin >> n >> input;
    cout << check(n, input, "DFS") << " " << check(n, input, "dfs") << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}