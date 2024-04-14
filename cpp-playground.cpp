#include <bits/stdc++.h>

#define endl "\n";

using std::cin, std::cout;

const int N = 1e5 + 9;
int map[N];
std::vector<int> p, q;
int np = 1, nq = 1;

int main() {
    std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> map[i];

    for (int i = 0; i < n; i++) {
        if (std::find(p.begin(), p.end(), map[i]) != p.end()) {
            q.push_back(map[i]);
            if (nq == map[i]) nq++;
            p.push_back(0);
        } else {
            p.push_back(map[i]);
            q.push_back(0);
            if (np == map[i]) np++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (p[i] == 0) cout << np++ << " ";
        else cout << p[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (q[i] == 0) cout << nq++ << " ";
        else cout << q[i] << " ";
    }
    return 0;
}