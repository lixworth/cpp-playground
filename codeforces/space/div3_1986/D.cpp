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
	int n; string s;
	cin >> n >> s;
	if(n <= 2){
		cout << stoi(s) << endl;
		return;
	}
	if(s[0] == '0'){
		cout << 0 << endl;
		return;
	}
	int mmax = 0;
	int pos1 = 0, pos2 = 0;
	int cnt = n-2;
	int ans = 0;
	for(int i=0;i<n;++i){
		if(i+1 < n && s[i] == '0' && s[i+1] == '0'){
			cout << 0 << endl;
			return;
		}
		ans += s[i]; 
	}
	cout << ans << endl;
	// cout << -1 << endl;
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}