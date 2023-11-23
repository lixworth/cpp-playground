#include <stdio.h>

int main(){
	int n,v;
	scanf("%d%d",&n,&v);
	int result = 0;
	for(int i=0;i<=n;i++){
		int t,w;
		scanf("%d%d",&t,&w);
		if(w*(v/t) > result){
			result = w*(v/t);
		}
	}
	printf("%d",result);
	return 0;
}
