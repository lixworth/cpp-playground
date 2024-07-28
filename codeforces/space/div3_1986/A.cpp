/*
 * Created by LixWorth (Device: MINIPC-SER7 WIN11)
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

void solve(){
	int x1,x2,x3;
	cin >> x1 >> x2 >> x3;

	int mmin = 30;
	for(int i=1;i<=10;++i){
		mmin = min(mmin,abs(x1-i)+abs(x2-i)+abs(x3-i));
		if(mmin == 0) break;
	}
	cout << mmin << endl;
}


int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}