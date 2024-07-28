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

set<char> sset;

void solve(){
	string input;
	cin >> input;
	sset.clear();
	for(auto &item : input){
		sset.insert(item);
	}
	if(sset.size() == input.size() && sset.size() != 1) cout << -1 << endl;
	else if(sset.size() == input.size() && sset.size() == 1) cout << 0 << endl;
	else {
		for (int i = 0; i < sset.size() - 1; ++i)
		{
			if(input[i] == input[i+1]){
				cout << i+1 << endl;
				return;
			}
		}
		cout << 0 << endl;
	}
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}