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

const int N = 2e5+9;
ll arr[N],prefix[N];

void solve(){
	ll n,q; cin >> n >> q;

	for(ll i=1;i<=n;++i){
		cin >> arr[i];
		prefix[i] = prefix[i-1] + arr[i];
	}

	while(q--){
		ll l,r,k; cin >> l >> r >> k;
		ll result = prefix[l-1];
		result += (r-l+1)*k;
		result += prefix[n]-prefix[r];
		if(result%2 != 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}