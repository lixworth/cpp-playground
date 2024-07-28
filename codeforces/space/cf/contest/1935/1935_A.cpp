    /*
     * Created by LixWorth on 2024/03/05 22:38
     * Github: https://github.com/lixworth/
     * Website: https://blog.lix.moe/
     * Contact: lixworth@outlook.com
    **/
    //#include <bits/stdc++.h>
    #include <iostream>
    #include <algorithm>
    #define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

    using namespace std;

    using ll = long long;

    void solve() {
        int n;
        string input;
        cin >> n >> input;
        int check = 0;
        int len = input.size();
        for (int i = 0; i < len/2; ++i) {
            if(input[i] == input[len-i-1]) continue;
            if(input[i] > input[len-i-1]){
                check = 1;
            }else{
                break;
            }
        }
        if (check) {
            string input_re = input;
            reverse(input_re.begin(), input_re.end());
            cout << input_re << input << endl;
        } else {
            cout << input << endl;
        }
    }

    int main() {
        FAST_IO;
        int T = 1;
        cin >> T;
        while (T--) solve();
        return 0;
    }
