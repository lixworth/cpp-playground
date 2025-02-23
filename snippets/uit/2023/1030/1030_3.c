//
// Created by Worth Lix on 2023/10/30.
//
#include <stdio.h>

int main(){
    // 冒泡排序
    int number[] = {5,7,8,9,1};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4-i; j++) {
            if(number[j] > number[j+1]){ // 升序
                int tmp = number[j];
                number[j] = number[j+1];
                number[j+1] = tmp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n",number[i]);
    }
    return 0;
}