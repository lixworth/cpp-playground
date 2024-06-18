/*
 * Created by LixWorth on 2023/12/30 22:51
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
        int n,k;
        cin >> n >> k;
        int map[5];
        ll result = 1;
        for (int i = 0; i < n; ++i) {
            cin >> map[i];
            result*=map[i];
        }
        if(result == 2023){
            cout << "YES" << endl;
            for (int i = 0; i < k; ++i) {
                cout << 1 << " ";
            }
            cout << endl;
        }else{
            if(2023%result == 0){
                cout << "YES" << endl;
                cout << 2023/result << " ";
                for (int i = 0; i < k-1; ++i) {
                    cout << 1 << " ";
                }
                cout << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
