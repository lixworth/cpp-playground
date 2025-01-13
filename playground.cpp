#include <climits>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

int min_obstacles(int L, int S, int T, int M, const vector<int> &obstacles) {
    // 将障碍物位置存储为集合，以便快速查找
    set<int> obstacle_set(obstacles.begin(), obstacles.end());

    // 队列元素为 (当前坐标, 已踩到的障碍物数量)
    queue<pair<int, int>> q;
    q.push({0, 0}); // 初始位置 0, 踩到的障碍物数量是 0

    // visited 数组，记录最少踩到障碍物数量
    vector<int> visited(L + 1, INT_MAX); // 初始时所有位置都未访问
    visited[0] = 0; // 起点处障碍物数量为 0

    while (!q.empty()) {
        int current_position = q.front().first;
        int current_obstacles = q.front().second;
        q.pop();

        // 如果当前的位置已经到达或超过 L，直接返回已踩的障碍物数量
        if (current_position >= L) {
            return current_obstacles;
        }

        // 对于每个步长 S 到 T
        for (int step = S; step <= T; ++step) {
            int next_position = current_position + step;
            if (next_position > L) {
                continue;
            }

            // 计算到达 next_position 时，是否踩到了障碍物
            int next_obstacles = current_obstacles + (obstacle_set.count(next_position) > 0 ? 1 : 0);

            // 如果没有访问过这个位置，或者踩到的障碍物更少，更新状态
            if (next_obstacles < visited[next_position]) {
                visited[next_position] = next_obstacles;
                q.push({next_position, next_obstacles});
            }
        }
    }

    // 代码应确保一定能到达 L，因此不需要额外返回值
    return -1; // 如果无法到达L，返回 -1 (理论上这个不会发生)
}

int main() {
    int L, S, T, M;
    cin >> L; // 植物园长度
    cin >> S >> T >> M; // 步长区间和障碍物个数
    vector<int> obstacles(M);
    for (int i = 0; i < M; ++i) {
        cin >> obstacles[i]; // 障碍物的位置
    }

    // 计算并输出结果
    cout << min_obstacles(L, S, T, M, obstacles) << endl;

    return 0;
}
