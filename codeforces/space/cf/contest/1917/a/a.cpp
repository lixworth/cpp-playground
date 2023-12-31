/*
 * Created by LixWorth on 2023/12/30 15:59
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int f_count = 0;
        bool has_zero = false;
        for (int i = 0; i < n; ++i) {
            int tmp = 0 ;
            cin >> tmp;

            if(tmp < 0){
                f_count++;
            }
            if(tmp == 0){
                has_zero = true;
            }
        }
        if(has_zero){
            cout << 0 << endl;
            continue;
        }

        if(f_count%2 != 0){
            cout << 0 << endl;
        }else{
            cout << 1 << endl << 1 << " " << 0 << endl;
        }
    }
    return 0;
}
