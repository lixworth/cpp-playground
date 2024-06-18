/*
 * Created by LixWorth on 2024/01/17 17:12
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

const int N = 2e5;

void solve() {
    ll map[N];
    ll n = 0, f = 0, a = 0, b = 0; // 信息数量 手机初始电量 单位时间电量消耗 依次关机和开机时的电量消耗。
    cin >> n >> f >> a >> b;
    for (int i = 0; i < n; ++i) cin >> map[i];

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            f -= min(map[i] * a, b);
        } else {
            // 如果相邻俩次发短信时间 手机待机总电量 小于 开关机的情况 则选择待机
            f -= min((map[i] - map[i - 1]) * a, b);
        }
    }
    if (f <= 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main(){
    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}
