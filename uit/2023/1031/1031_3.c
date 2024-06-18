//
// Created by Worth Lix on 2023/10/31.
//
#include <stdio.h>

int main(){
    long int a,b;
    scanf("%ld%ld",&a,&b);
    long int count_a = 1;
    while ((a*count_a)%b != 0){
        count_a++;
    }
    printf("%ld\n",a*count_a);
    return 0;
}
