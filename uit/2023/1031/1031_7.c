//
// Created by Worth Lix on 2023/10/31.
//
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a < b){
        printf("<\n");
    }else if(a == b){
        printf("=\n");
    }else if(a > b){
        printf(">\n");
    }
    return 0;
}
