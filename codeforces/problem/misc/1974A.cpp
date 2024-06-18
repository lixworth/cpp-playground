#include <bits/stdc++.h>
#define endl "\n"

using std::cin,std::cout;

void solve(){
    int x,y; cin >> x >> y; // x 1x1 y 2x2
    int count = 0;
    count += y/2;
	if(y%2 != 0) count++;
    if(count * 15 < x + 4 * y){
		int add = (x + 4 * y) - count * 15;
        count += std::ceil(add/15);
		if(add%15 != 0) count++;
    }
    cout << count << endl;
}

int main(){
    std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

    int T = 1;
    cin >> T;
    while(T--) solve();
    return 0;
}
