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

bool isPrime(ll n){
	if(n <= 1) return false;
	for(ll i=2;i*i<n;++i){
		if(n%i == 0) return false;
	}
	return true;
}

void solve(){
	ll n;
	cin >> n;	
	ll mmax = 0;
	for(ll i=3;i<n;++i){
		if(isPrime(i) && isPrime(n/i) && (n%i) == 0){
			mmax = max(mmax,max(i,n/i));
			break;
		}
	}

	cout << mmax << endl;
}

int main(){
	IOS
	int tt = 1;
	while(tt--) solve();
	return 0;
}