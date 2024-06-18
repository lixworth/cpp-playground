#include <bits/stdc++.h>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

void solve(){
	int n,m; cin >> n >> m;
	if(n < m) cout << "NO" << endl;
	else if((n-m)%2 == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main()
{	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}