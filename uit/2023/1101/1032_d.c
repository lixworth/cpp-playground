//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>

int main(){
    int count;
    scanf("%d\n",&count);
    int numbers[8] = {};
    int index = 0;
    while (scanf("%d",&numbers[index]) != EOF){
        index++;
    }
    for (int i = 0; i < count; ++i) {
        for (int j = 0; j < count-1; ++j) {
            if(numbers[j] < numbers[j+1]){
                int tmp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = tmp;
            }
        }
    }
    if(numbers[count-1] != 0){
        printf("-1");
    }else{
        for (int i = 0; i < count; ++i) {
            printf("%d",numbers[i]);
        }
    }
    return 0;
}