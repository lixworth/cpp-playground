//
// Created by Worth Lix on 2024/1/14.
//
// https://www.acwing.com/activity/content/problem/content/819/1/C++/
// 快速排序
#include <iostream>

using namespace std;

int n;
const int N = 1e6+10;
int map[N];

void quick_sort(int q[],int l,int r) {
    if (l == r) return;

    int x = q[(l + r) >> 1], i = l - 1, j = r + 1;
    while (i < j) {
        do i++; while (q[i] < x);
        do j++; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }

    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> map[i];
    }

    quick_sort(map, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << map[i] << " ";
    }
    return 0;
}
