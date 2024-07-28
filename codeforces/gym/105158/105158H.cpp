/*
 * Created by LixWorth on 2024/05/15 19:11
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);
#define endl "\n"

//using namespace std;
using std::cin, std::cout;
using ll = long long;

const int MOD = 998244353;
const int N = 2e5 + 9;
std::priority_queue<int, std::vector<int>, std::greater<>> queue;

int ans = 0;
int cnt[N];

void solve() {
    int n;
    cin >> n;
    int end = -1; // 最后一个取出的
    for (int i = 0; i < 2 * n; ++i) {
        int input;
        cin >> input;
        if (input == -1) {
            int check = queue.top();
            if (end <= check) {
                end = check;
            } else {
                cout << 0 << endl;
                return;
            }

//            ans += (cnt[input] * 1.0 / queue.size()) % MOD;

            cnt[input]--;
            queue.pop();
        } else {
            queue.push(input);
            cnt[input]++;
        }
    }

    cout << ans % MOD << endl;
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
