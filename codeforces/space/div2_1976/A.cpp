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

bool is_number(char input){
	return input >= '0' && input <= '9';
}

bool is_letter(char input){
	return input >= 'a' && input <= 'z';
}

void solve(){
	int n; string input;
	cin >> n >> input;

	int flag_num = 0;
	for(int i=0;i<input.length();++i){
		if(flag_num){
			if(is_number(input[i])){
				cout << "NO" << endl;
				return;
			}
		}
		if(is_letter(input[i])){
			flag_num = 1;
		}
		if(i != 0 && is_number(input[i]) == is_number(input[i-1]) && input[i-1]-input[i] > 0){
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