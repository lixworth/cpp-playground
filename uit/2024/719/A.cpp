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
	ll a,b,c;
	cin >> a >> b >> c;

	ll mmax = 0;

	mmax = max(mmax,a*b*c);
	mmax = max(mmax,a+b+c);
	mmax = max(mmax,(a+b)*c);
	mmax = max(mmax,a*(b+c));

	cout << mmax << endl;
}

int main(){
	IOS
	int tt = 1;
	// cin >> tt;
	while(tt--) solve();
	return 0;
}