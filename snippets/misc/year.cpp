#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int y,n;
	scanf("%d %d",&y,&n);
	// 上一年是否为闰年
	if(((y-1)%4 == 0 && (y-1)%100 != 0) || y%400){ 
		printf("%d",n+n*2);
	}else{
		if((y%4 == 0 && y%100 != 0)  || y%400){
			printf("%d",n+n/2);
		}else{
			printf("%d",n+n);
		}
	}
	return 0;
}