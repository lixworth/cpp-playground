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
	int n;
	string input;
	cin >> n >> input;

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i != j && input[i] == input[j]){
				if(abs(i-j)%2 != 0){
					cout << "NO" << endl;
					return;
				}
			}
		
}	}
	cout << "YES" << endl;
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}