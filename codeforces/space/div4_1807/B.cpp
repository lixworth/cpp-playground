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

const int N = 1000;

void solve(){
	int n; cin >> n;
	int u1 = 0,u2 = 0;

	for (int i = 0; i < n; ++i){
		int tmp; cin >> tmp;
		if(tmp%2 == 0) u1 += tmp;
		else u2 += tmp;
	}
	
	if(u1 > u2) cout << "YES" << endl;
	else cout << "NO" << endl;
}	

int main()
{	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}
