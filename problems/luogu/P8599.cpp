/*
 * Created by LixWorth on 2024/03/24 20:03
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

using namespace std;

using ll = long long;

int x, sum, a, b, c;
int arr[10];

int add(int l, int r) {
    int ans = 0;
    for (int i = l; i <= r; ++i) {
        ans = ans * 10 + arr[i];
    }
    return ans;
}

void solve() {
    cin >> x;
    for (int i = 0; i < 9; i++) {
        arr[i] = i + 1;
    }
    do {
        for (int i = 0; i < 7; ++i) {
            for (int j = i + 1; j < 8; ++j) {
                a = add(0, i), b = add(i + 1, j), c = add(j + 1, 8);
                // a=0~i
                // b=(i+1)~j
                // c=(j+1)~8
                if (a == 0 && b == 0 && c == 0) continue;
                if (a * c + b == x * c) {
                    sum++;
                }
            }
        }
    } while (next_permutation(arr, arr + 9));

    cout << sum << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
