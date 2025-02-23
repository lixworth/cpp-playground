c'd'/*
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

ll ggcd(ll a, ll b){ 
	return b ? ggcd(b, a % b) : a;
}

void solve(){
	ll n;
	cin >> n;
	ll fact = 1;
	for(int i=1;i<=n;++i) fact *= i;
	cout << ggcd(n+0.5*n*(n-1),fact) << endl;
}


int main(){
	IOS
	int tt = 1;
	while(tt--) solve();
	return 0;
}