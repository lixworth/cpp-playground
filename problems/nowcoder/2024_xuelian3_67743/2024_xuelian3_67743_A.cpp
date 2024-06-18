/*
 * Created by LixWorth on 2024/02/07 13:05
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define FAST_IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);

using namespace std;

typedef long long ll;

void solve() {
    string input1,input2;
    cin >> input1 >> input2;

    if(tolower(input1[0]) == tolower(input2[0])){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

int main() {
    FAST_IO;
    int T;
    cin >> T;
    while (T--)solve();
    return 0;
}