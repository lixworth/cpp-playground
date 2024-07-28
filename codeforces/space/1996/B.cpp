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

const int N = 10000;
string arr[N];
void solve(){
	int n,k;
	cin >> n >> k;

	for(int i=1;i<=n;++i){
		cin >> arr[i];
	}
	for(int i=1;i<=n;i+=k){
		for(int j=1;j<=n;j+=k){
			cout << arr[i][j-1];
		}
		cout << endl;
	}
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}