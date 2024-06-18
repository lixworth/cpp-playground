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

const int N = 1e1;
int arr[N];
ll prefix[N];

void solve(){
	int n; cin >> n;
	for(int i=1;i<=n;++i){
		cin >> arr[i];
	}
	sort(arr+1,arr+n+1,greater<int>());

	for(int i=1;i<=n;++i){
		prefix[i] = prefix[i-1] + arr[i];
	}

	if(arr[n] != 1){
		cout << "No" << endl;
		return;
	}
	for(int i=1;i<=n-1;++i){
		if(arr[i] > prefix[n] - prefix[i]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}