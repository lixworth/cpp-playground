//
// Created by Worth Lix on 2023/12/17.
//
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int b_index = 0, c_index = 0;
        int b[100], c[100];
        int a[100];
        for (int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;
            a[i] == tmp;
            int flag = 0;
            // 2 / 1
            if(tmp == 1){
                if(b_index == 0){
                    b[b_index] = 1;
                    b_index++;
                    continue;
                }else if(c_index == 0){
                    c[c_index] = 1;
                    c_index++;
                    continue;
                }
            }
            for (int j = 0; j < b_index; ++j) {
                if (b[j] % tmp != 0) {
                    c[c_index] = tmp;
                    c_index++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                b[b_index] = tmp;
                b_index++;
            }
        }

        if(b_index == 0 || c_index == 0){
            cout << -1 << endl;
            continue;
        }
        cout << b_index << " " << c_index << endl;
        for (int i = 0; i < b_index; ++i) {
            cout << b[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < c_index; ++i) {
            cout << c[i] << " ";
        }
    }
    return 0;
}