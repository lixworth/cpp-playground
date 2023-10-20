#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("%lu,%lu,%lu,%lu,%lu\n",sizeof(int),sizeof(char),sizeof(float),sizeof(double),sizeof(short));
	printf("%lu,%lu,%lu,%d,%lu\n",sizeof(-1),sizeof('\101'),sizeof 1.22f*4,sizeof(1.0*4),sizeof(1*2));
}