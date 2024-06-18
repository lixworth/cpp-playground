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

const int N = 100;
int arr[N];

void solve(){
	memset(arr,0,sizeof(arr));

	int n,m; cin >> n >> m;
	string input; cin >> input;

	for(auto &item: input){
		arr[item]++;
	}

	int cnt = 0;
	for(int i='A';i<='G';++i){
		if(arr[i] < m) cnt+=m-arr[i];
	}

	cout << cnt << endl;

}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}