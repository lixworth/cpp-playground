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
int arr[N],prefix[N];

void solve(){
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;++i) cin >> arr[i];

	for(int i=1;i<=n;++i) prefix[i] = prefix[i-1] + arr[i];

	while(m--){
		int f,x,y;
		cin >> f >> x >> y;
		if(f == 1){
			arr[x] += y;
			for(int i=x;i<=n;++i){
				prefix[i] += y;
			}
		}else{
			cout << prefix[y]-prefix[x-1] << endl;
		}
	}
}

int main(){
	IOS
	int tt = 1;
	// cin >> tt;
	while(tt--) solve();
	return 0;
}