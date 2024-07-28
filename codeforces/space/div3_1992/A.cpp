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

void solve(){
	int a,b,c;
	cin >> a >> b >> c;

	int mmax = a*b*c;
	int i,j,k = 0;

	for(int i=0;i<=5;++i)
		for(int j=0;j<=5;++j)
			for(int k=0;k<=5;++k){
				if(i+j+k <=5){
					mmax = max(mmax,(a+i)*(b+j)*(c+k));
				}
			}
			
	cout << mmax << endl;
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}