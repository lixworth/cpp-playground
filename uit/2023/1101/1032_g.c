//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>
#include <math.h>

int main(){
    long int n;
    scanf("%ld",&n);
    for (long int i = 1; i < pow(10,9); ++i) {
        if(3*i >= n){
            printf("%ld",3*i);
            break;
        }
    }
    return 0;
}