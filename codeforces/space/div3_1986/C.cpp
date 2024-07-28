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
	int n,m; string s,c;
	cin >> n >> m >> s; // n
	for(int i=0;i<m;++i) cin >> arr[i];
	cin >> c; // m 
	
	sort(c.begin(),c.end());
	sort(arr,arr+m);
	set<int> ss(arr,arr+m);
	c.erase(ss.size(),m-ss.size());
	int index = 0;

	for(auto &item: ss){
		s[item-1] = c[index]; index ++;
	}
	cout << s << endl;
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}