//
// Created by Worth Lix on 2023/10/31.
//
#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);
    int number[1000] = {};
    int index = 0;
    while (scanf("%d", &number[index]) != EOF) {
        index++;
    }
    int already[1000] = {};
    int al_index = 0;
    for (int i = 0; i < n; ++i) {
        int check = 1;
        for (int j = 0; j < n; ++j) {
            if(already[j] == number[i]){
               check = 0;
            }
        }
        if(check){
            printf("%d ",number[i]);
            already[al_index] = number[i];
            al_index++;
        }
    }
    return 0;
}
