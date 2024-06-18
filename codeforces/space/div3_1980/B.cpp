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

const int N = 1000;
int arr[N];

void solve(){
	int n,f,k; cin >> n >> f >> k;
	for (int i = 1; i <= n; ++i) cin >> arr[i];

	int check = arr[f];
	sort(arr+1,arr+n+1,greater<int>());

	if(arr[k] == check){
		if(k+1 <= n && arr[k+1] == check) cout << "MAYBE" << endl;
		else cout << "YES" << endl;
	}
	else if(arr[k] > check) cout << "NO" << endl;
	else cout << "YES" << endl;
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}