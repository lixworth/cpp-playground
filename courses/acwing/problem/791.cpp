//
// Created by Worth Lix on 2024/3/4.
//
#include <iostream>

using namespace std;

int map[100010];

// https://www.acwing.com/problem/content/791/
int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; ++i) cin >> map[i];

    while (q--) {
        int x;
        cin >> x;
        int l = 0, r = n;
        while (l + 1 != r) {
            int mid = (l + r) >> 1;
            if(map[mid] <= x) l = mid;
            else r = mid;
        }
        if(map[l] != x){
            cout << "-1 -1" << endl;
            continue;
        }

        cout << l << " ";
        l = 0,r = n;
        while (l + 1 != r){
            int mid = (l + r ) >> 1;
            if(map[mid] <= x) l = mid;
            else r = mid;
        }
        cout << r << endl;
    }
    return 0;
}