//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>
#include <math.h>

int main(){
    int count;
    scanf("%d",&count);
    int index = 0;
    int a[] = {};
    int b[] = {};
    int n[] = {};
    while (scanf("%d %d %d",&a[index],&b[index],&n[index]) == EOF){
        index++;
    }

    for (int i = 0; i < count; ++i) {
        while (n[i] > 0){
            for (int x = 0; x < 1000000; ++x) {
                if(pow(a[index],2)*pow(x,2)+a[index]*x+1 > n[index]){

                }
            }
        }
    }
    return 0;
}