//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>

int main() {
    long int number;
    scanf("%ld", &number);
    printf("%ld",(number+1)%998244351);
    return 0;
}