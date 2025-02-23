/*
 * Created by LixWorth on 2024/04/07 19:21
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

std::vector<std::string> map;

bool cmp(std::string a, std::string b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    } else {
        return stoll(a) < stoll(b);
    }
}

void solve() {
    std::string input;
    cin >> input;
    for (ll i = 0; i < input.length(); i++) {
        if (input[i] % 2 == 0) {
            std::string tmp;
            tmp += input[i];
            map.push_back(tmp);
        } else {
            std::string cache;
            cache += input[i];
            ll start = i;
            while (start <= input.length()) {
                start++;
                cache += input[start];
                if (input[start] % 2 == 0) {
                    map.push_back(cache);
                    break;
                }
            }
            i = start;
        }
    }

    std::sort(map.begin(), map.end(), cmp);

    for (const auto &item: map) {
        cout << item << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
