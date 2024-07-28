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

const int N = 2e5+9;
int a[N],b[N];
ll c[N];
map<ll,ll> mmap;

void solve(){
	mmap.clear();

	int n; cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	for (int i = 0; i < n; ++i) cin >> b[i];

	int m; cin >> m;

	for (int i = 0; i < m; ++i){
		cin >> c[i];
		mmap[c[i]]++;
	}

	vector<int> arr;
	vector<ll> whitelist;
	int cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i] != b[i]){
			arr.push_back(i);
		}else{
			whitelist.push_back(b[i]);
		}
	}

	for(auto &item: arr){
		// cout << b[item] << ":" << mmap[b[item]] << endl;
		if(mmap[b[item]] == 0){ // 3 2
			cout << "NO" << endl;
			return;
		}
		mmap[b[item]]--;
		whitelist.push_back(b[item]);
	}


	for(int i=0;i<m;++i){
		cout << c[i] << endl;
		if(find(whitelist.begin(),whitelist.end(),c[i]) == whitelist.end()){
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
