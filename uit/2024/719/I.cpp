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

int arr[1000][1000];

void solve(){
	int n;
	cin >> n;

	// 1 2 3
	// 4 5 6
	// 7 8 9

	// 5 6 7 8 

	// 1 2 3 4
	// 6 5 8 7 
	// 9 10 11 12
	// 13 14 15 16

	for(int i=0;i<n;++i){
		if(i%2 == 0){
			for(int j=i*n+1;j<=(i+1)*n;++j) cout << j << " ";
		}else{
			if((i*n+1)%2 == 0) for(int j=i*n+1;j<=(i+1)*n;++j) cout << j << " ";
			else {
				for(int j=i*n+1;j<=(i+1)*n;j+=2) cout << j+1 << " " << j << " ";
			}
		}
		cout << endl;
	}
}

int main(){
	IOS
	int tt = 1;
	// cin >> tt;
	while(tt--) solve();
	return 0;
}