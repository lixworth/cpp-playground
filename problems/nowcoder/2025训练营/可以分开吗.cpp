#include <bits/stdc++.h>
using namespace std;
const int N = 510;
int b[N][N];
char s[N][N];
int dx[4] = {1, 0, -1, 0}; // 下、右、上、左
int dy[4] = {0, 1, 0, -1};

int bfs(int i, int j, int n, int m) {
    b[i][j] = 1;
    queue<pair<int, int>> q;
    q.push({i, j});
    int sum = 0;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int k = 0; k < 4; k++) {
            int newX = x + dx[k];
            int newY = y + dy[k];
            if (newX >= 1 && newX <= n && newY >= 1 && newY <= m) {
                if (s[newX][newY] == '1' && b[newX][newY] == 0) {
                    q.push({newX, newY});
                    b[newX][newY] = 1;
                } else if (s[newX][newY] == '0' && b[newX][newY] == 0) {
                    sum++;
                    b[newX][newY] = 1;
                }
            }
        }
    }

    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) { cin >> s[i][j]; }
    }

    int sum = 1e9;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s[i][j] == '0' || b[i][j] == 1)
                continue;
            sum = min(sum, bfs(i, j, n, m));
        }
    }

    cout << (sum == 1e9 ? 0 : sum) << endl;
    return 0;
}
