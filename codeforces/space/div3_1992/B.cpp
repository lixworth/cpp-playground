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

const int N = 1e5+9;
int arr[N];

void solve(){
	int n,k;
	cin >> n >> k;
	for(int i=0;i<k;++i) cin >> arr[i];


	sort(arr,arr+k);

	int sum = 0;
	sum += n - arr[k-1];
	for(int i=0;i<k-1;++i){
		if(arr[i] != 0) sum += arr[i]-1;
	}

	cout << sum << endl;
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}