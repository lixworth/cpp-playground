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

const int N = 1000;
int arr[N][N];
void solve(){
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin >> arr[i][j];
		}
	}	

	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			int mmax = 0;
			int check = 1;
			if(i-1 >= 0 && i-1 < n){
				if(arr[i-1][j] >= arr[i][j]){
					continue;
				}
				mmax = max(mmax,arr[i-1][j]);
			}
			
			if(i+1 >= 0 && i+1 < n){
				if(arr[i+1][j] >= arr[i][j]){
					continue;
				}
				mmax = max(mmax,arr[i+1][j]);
			}
			if(j-1 >= 0 && j-1 < m){
				if(arr[i][j-1] >= arr[i][j]){
					continue;
				}
				mmax = max(mmax,arr[i][j-1]);
			}
			if(j+1 >= 0 && j+1 < m){
				if(arr[i][j+1] >= arr[i][j]){
					continue;
				}
				mmax = max(mmax,arr[i][j+1]);
			}
			arr[i][j] = mmax;
		}
	}	

	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}