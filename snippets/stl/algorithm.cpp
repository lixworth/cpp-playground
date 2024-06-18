//
// Created by Worth Lix on 2024/3/11.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using ll = long long;

vector<int> v0({1, 2, 3, 4, 5, 6, 43});

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    cout << *find(v0.begin(), v0.end(), 0) << endl;

    for (auto item: v0) {
        cout << item << " ";
    }
    cout << "\n";

    reverse(v0.begin(), v0.end());

    for (auto item: v0) {
        cout << item << " ";
    }
    cout << "\n";

    sort(v0.begin(), v0.end()); // 升序

    vector<int> v1 = v0;

    for (auto item: v0) {
        cout << item << " ";
    }
    cout << "\n";

//    sort(v0.begin(), v0.end(), cmp); // down
    sort(v0.begin(), v0.end(), greater<int>()); // down

    for (auto item: v0) {
        cout << item << " ";
    }
    cout << "\n";

    vector<int> v3;
    merge(v0.begin(), v0.end(), v1.begin(), v1.end(), back_inserter(v3));

    for (auto item: v3) cout << item << " ";
    cout << endl;

    replace(v3.begin(), v3.end(), 43, 233);
    for (auto item: v3) cout << item << " ";
    cout << endl;

    cout << *max_element(v3.begin(), v3.end()) << endl;
    cout << *min_element(v3.begin(), v3.end()) << endl;

    sort(v3.begin(), v3.end());
//    vector<int> v4 = unique(v3.begin(), v3.end());

    for (auto item: v3) {
        cout << item << " ";
    }
    cout << "\n";


}