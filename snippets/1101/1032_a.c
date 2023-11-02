//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>
#include <string.h>

int main(){
    char number[] = {};
    scanf("%s\n",number);
    if(strrchr(number, number[0]) == strlen(number)){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}