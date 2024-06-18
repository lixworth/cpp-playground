/*
 * Created by LixWorth on 2024/03/31 20:40
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

const int N = 2e5 + 9;
int n;

struct Book {
    int h, s, w;
//
//    // 他决定按照高度、厚度、宽度分别作为第一、第二、第三关键字
//    bool operator<(const Book &u) const {
//        if (h == u.h && s == u.s) return w > u.w;
//        if (h == u.h) return s > u.s;
//        return h > u.h;
//    }
} map[N];

bool cmp(const Book &u, const Book &v) {
    if (v.h == u.h && v.s == u.s) return v.w < u.w;
    if (v.h == u.h) return v.s < u.s;
    return v.h < u.h;
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> map[i].h >> map[i].s >> map[i].w;
    }

    std::sort(map, map + n, cmp);

    for (int i = 0; i < n; ++i) {
        cout << map[i].h << " " << map[i].s << " " << map[i].w << endl;
    }
}

int main() {
    FAST_IO;
    int T = 1;
//    cin >> T;
    while (T--) solve();
    return 0;
}
