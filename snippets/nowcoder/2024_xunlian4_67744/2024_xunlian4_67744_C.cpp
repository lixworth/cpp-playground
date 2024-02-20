/*
 * Created by LixWorth on 2024/02/19 13:38
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
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    string input[100];

    for (int i = 0; i < n; ++i) {
        cin >> input[i];
    }

    int p, q;
    cin >> p >> q;

    int map1[100][100];
    for (int i = 0; i < q; ++i) {
        cin >> map1[i][0] >> map1[i][1]; // op0 z1
    }
    while (p--){
        for (int i = 0; i < q; ++i) {
            int op = map1[i][0],z = map1[i][1];
            if (op == 1) {
                char cache[m];
                for (int j = 0; j < m; ++j) {
                    cache[j] = input[z-1][j];
                }
                input[z-1][0] = cache[m-1];
                for (int j = 1; j < m; ++j) {
                    input[z-1][j] = cache[j-1];
                }
            } else { // op = 2
                char cache[n];
                for (int j = 0; j < n; ++j) {
                    cache[j] = input[j][z-1];
                }
                input[0][z-1] = cache[n-1];
                for (int j = 1; j < n ; ++j) {
                    input[j][z-1] = cache[j-1];
                }
            }

//            for (int j = 0; j < n; ++j) {
//                for (int k = 0; k < m; ++k) {
//                    cout << input[j][k];
//                }
//                cout << endl;
//            }
//            cout << "=======\n";

        }
    }

    cout << input[x-1][y-1] << endl;
}

int main() {
    FAST_IO;
//    int T;
//    cin >> T;
//    while (T--) solve();
    solve();
    return 0;
}
