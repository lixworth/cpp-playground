/*
 * Created by LixWorth on 2024/01/13 22:38
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    int max = 0,min = 0;
    vector<int>black_list;

    for (int i = 0; i < n; ++i) {
        int a,x;
        cin >> a >> x;

        if(a == 1){
            if(min <= x){
                min = x;
            }
        }else if(a == 2){
            if(max == 0){
                max = x;
            }else if(max >= x){
                max = x;
            }
        }else{
            black_list.push_back(x);
        }
    }

//    cout << max << " " << min << endl;
    int count = max-min+1;
    if(count < 0 ){
        cout << 0 << endl;
    }else{
        for (const auto &item: black_list) {
            if(item >= min && item <= max){
                count--;
            }
        }
        cout << count << endl;
    }
}

int main(){
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}
