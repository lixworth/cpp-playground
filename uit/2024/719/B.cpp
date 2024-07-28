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

// 1e9
const int N = 1e6 + 9;
ll arr[N];

void solve(){
	ll x;
	cin >> x;
	for(int i=1;i<=1e6;++i) arr[i] = i*i;

	for(int i=1;i<=1e6;++i){
		if(arr[i] == x){
			cout << 0 << endl;
			break;
		}
		if(arr[i] < x && arr[i+1] > x){
			if((x-arr[i])%2 == 0 && (arr[i+1]-x)%2 == 0){
				cout << min((x-arr[i])/2,(arr[i+1]-x)/2);
				break;
			}else if((x-arr[i])%2 == 0){
				cout << (x-arr[i])/2 << endl;
				break;
			}else if((arr[i+1]-x)%2 == 0){
				cout << (arr[i+1]-x)/2 << endl;
				break;
			}
		}
	}
}

int main(){
	IOS
	int tt = 1;
	while(tt--) solve();
	return 0;
}