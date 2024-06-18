//
// Created by Worth Lix on 2024/3/6.
//
#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> deque;

    for (int i = 0; i < 100; ++i) {
        if (i % 2 == 0) deque.push_back(i);
        else deque.push_front(i);
    }

    for (int i: deque) {
        cout << i << " ";
    }
    cout << "\n";
    cout << *deque.begin() << " " << *deque.end() << endl;


    deque.pop_front();  // 队首元素出队
    deque.pop_back();   // 队尾元素出队


    cout << deque.size() << endl;

    return 0;
}