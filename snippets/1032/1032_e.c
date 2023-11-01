//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>

int main(){
    // 1 2 3
    int count;
    scanf("%d\n",&count);
    for (int i = 0; i < count; ++i) {
        int s;
        scanf("%d\n",&s);
        int numbers[] = {};
        for (int j = 0; j < s; ++j) {
            scanf("%d",&numbers[j]);
        }
        printf("\n");
        if(numbers[0]%2 != 0){
            printf("0\n");
        }
    }
    return 0;
}