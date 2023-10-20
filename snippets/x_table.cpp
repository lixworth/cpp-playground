#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	for (int i = 1;i < 10;i++) {
		for (int n = 1;n-1 < i;n++) {
			printf("%i*%i=%i ",i,n,i*n);
			if(n != 1 && i*n < 10){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
