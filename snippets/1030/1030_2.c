//
// Created by Worth Lix on 2023/10/30.
//
#include <stdio.h>

int main(){
    int number[10] = {};
    int index = 0;
    while (scanf("%d",&number[index]) != EOF){
        index++;
    }
    for (int i = 0; i < index; ++i) {
        if(number[i]%3 == 0){
            printf("odd\n");
        }else{
            printf("even\n");
        }
    }

    return 0;
}