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

const int N = 5e5+9;
ll arr[N],prefix[N];

int main(){
	ll n,m;
	scanf("%ld%ld",&n,&m);

	for(int i=1;i<=n;++i) scanf("%ld",&arr[i]);

	sort(arr+1,arr+n+1);

	int mmax = 0;
	for(int i=1;i<=n;++i){
		prefix[i] = prefix[i-1]+arr[i];
		if(prefix[i] <= )m{
			mmax = i;
		}
	}

	printf("%lld\n",mmax);
	return 0;
}