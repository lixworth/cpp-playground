#include <bits/stdc++.h>
#define endl "\n"

using std::cin,std::cout;

void solve(){
	int n;
	std::string input;
	cin >> n >> input;
	// serofedsoc
	// codefores
	std::set<char> ss;
	for(int i=0;i<n;++i){
		ss.insert(input[i]);
	}
	std::map<char,char> mmap;
	std::string c;
	for(auto &item: ss){
		c+=item;
	}
	
	for(int i=0;i<c.length();++i){
		mmap[c[i]] = c[c.length()-1-i];
	}
	
	for(int i=0;i<input.length();++i) cout << mmap[input[i]];
	cout << endl;
}
int main(){
	std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);
	
	int T = 1;
	cin >> T;
	while(T--) solve();
	return 0;
}
