/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 3000;
int arr[N];

void solve(){
	int n,d;
	cin >> n >> d;
	int ans = 0;
	for (int i = 0; i < n; ++i) cin >> arr[i];
	for (int i = 1; i < n; ++i)
	{
		if(arr[i] < arr[i-1]){
			int cnt = (arr[i-1]-arr[i])/d;
			if((arr[i-1]-arr[i])%d == 0){
				arr[i]+=d*cnt;
				ans+=cnt;
			}else{
				arr[i]+=d*(cnt + 1);
				ans+=cnt+1;
			}
		}else if(arr[i] == arr[i-1]){
			arr[i]+=d;
			ans+=1;
		}
	}
	cout << ans << endl;
}

int main(){
	IOS
	int tt = 1;
	// cin >> tt;
	while(tt--) solve();
	return 0;
}