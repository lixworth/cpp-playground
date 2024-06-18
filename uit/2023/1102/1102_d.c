//
// Created by Worth Lix on 2023/11/2.
//
#include <stdio.h>

int main() {
    int n,k,a,b;
    scanf("%d %d %d %d",&n,&k,&a,&b);
    if(a*(n-1) == (k-1)*b+(n-1)*b){
        printf("0");
    }else if(a*(n-1) < (k-1)*b+(n-1)*b){
        printf("2");
    }else{
        printf("1");
    }
    return 0;
}