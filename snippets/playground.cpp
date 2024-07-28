//
// Created by Worth Lix on 2023/12/29.
//

#include <cstdio>

int main(){
    int a = 3;
    float b = 3.12345678;
    double c = 3.12345678;

    printf("%-5d!\n", a);
    printf("%-8.4f!\n", b);
    printf("%08.3f!\n", c);

    return 0;
}