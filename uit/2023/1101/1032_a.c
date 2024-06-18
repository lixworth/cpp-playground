//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>
#include <string.h>

int main(){
    char number[100000] = {};
    scanf("%s\n",number);
    int check = 1;
    for (int i = 0; i < strlen(number); ++i) {
        if(number[i] != number[0]){
            check = 0;
            break;
        }
    }
    if(check){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}