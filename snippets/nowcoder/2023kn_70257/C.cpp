/*
 * Created by LixWorth on 2023/12/31 21:17
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >> n;
    int max = 0;
    int map_l[100000],map_r[100000];
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        map_l[i] = l;
        map_r[i] = r;
        if (i == 0) {
            max = r;
        } else {
            if (r - map_l[i-1] > max) {
                max = r - map_l[i-1];
            }
        }
    }

    cout << max << endl;
    return 0;
}
