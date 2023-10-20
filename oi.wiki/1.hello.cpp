#include <stdio.h>
#include <iostream>
//#include <cstdio>

using namespace std;

int main(){
	printf("Hello World \n");
	cout << "Hello World \n";	
	
	int x,y;
	
	// cpp
//	std::cin >> x >> y;
//	std::cout << y << std::endl << x;
	
	// c
	scanf("%d%d",&x,&y);
	printf("%d|%d",y,x);
	
	return 0;
}