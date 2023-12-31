/*
 * Created by LixWorth on 2023/12/30 23:08
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
        ll a,b;
        cin >> a >> b;

        if(min(a,b) == 1){
            cout << pow(max(a,b),2) << endl;
        }else{
            ll min_data = min(a,b);
            ll max_data = max(a,b);
            ll number = 2;
            while (true){
                ll test = max_data*number;
                if(test%min_data != 0){
                    number++;
                }else{
                    if(test/min_data == max_data){
                        cout << test << endl;
                        break;
                    }else if(test/min_data >= min_data){
                        number++;
                    }else{
                        cout << test << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}