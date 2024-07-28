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

ll a[N],b[N];

void solve(){
	int n;
	cin >> n;
	for(int i=0;i<n;++i) cin >> a[i];	
	for(int i=0;i<n+1;++i) cin >> b[i];	

	ll ans = 0;

	int handle = 0;
	ll mmin = 1e9;
	for(int i=0;i<n;++i){
		if(!handle && ((b[n] >= a[i] && b[n] <= b[i]) || ( b[n] <= a[i] && b[n] >= b[i]))){
			handle = 1;
			ans += 1;
		}else{
			mmin = min(abs(b[i]-b[n]),mmin);
			mmin = min(abs(a[i]-b[n]),mmin);
		}
		ans += abs(a[i]-b[i]);
	}
	if(!handle) ans += mmin + 1;
	cout << ans << endl;
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}