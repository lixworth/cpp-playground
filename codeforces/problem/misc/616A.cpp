#include <bits/stdc++.h>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

void solve(){
	string input1,input2;
	cin >> input1 >> input2;

	if(input1.length() > input2.length()){
		string tmp = input2;
		int n = input1.length()-input2.length();
		input2 = "";
		for (int i = 0; i < n; ++i)
		{
			input2+="0";
		}
		input2+=tmp;
	}else if(input1.length() < input2.length()){ 
		int n = input2.length()-input1.length();
		string tmp = input1;
		input1 = "";
		for (int i = 0; i < n; ++i)
		{
			input1+="0";
		}
		input1+=tmp;
	}

	// cout << input1 << endl << input2;
	for (int i = 0; i < input1.size(); ++i)
	{
		if(input1[i] > input2[i]){
			cout << ">" << endl;
			return;
		}else if(input1[i] < input2[i]){
			cout << "<" << endl;
			return;
		}
	}
	cout << "=" << endl;
}

int main(){
	IOS
	int tt = 1;
	// cin >> tt;
	while(tt--) solve();
	return 0;
}