//
// Created by Worth Lix on 2023/11/2.
//
#include <stdio.h>
#include <math.h>

int main(){
    long int n;
    scanf("%ld",&n);
    printf("%.3lf",pow(n,1.0/3.0)*3); // 1/3不行
    return 0;
}