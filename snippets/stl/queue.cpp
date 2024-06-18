//
// Created by Worth Lix on 2024/3/4.
//
#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> queue;
    cout << queue.empty() << endl; // true

    for (int i = 1; i <= 100 ; ++i) {
        queue.push(i);
    }

    cout << queue.front() << endl; // 1
    queue.pop(); // 出队

    cout << queue.front() << endl; // 2
    cout << queue.size() << endl; // 99

    cout << queue.empty() << endl; // false
    return 0;
}