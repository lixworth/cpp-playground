//
// Created by Worth Lix on 2023/11/3.
//
#include <stdio.h>

int main(){
    int n,m;
    scanf("%d%d\n",&n,&m);
    signed int money = 0;
    signed int prices[10000] = {};
    for (int i = 0; i < n; ++i) {
        scanf("%d",&prices[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-1; ++j) {
            if(prices[j+1] < prices[j]){
                signed int tmp = prices[j];
                prices[j] = prices[j+1];
                prices[j+1] = tmp;
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        if(prices[i]>0){
            break;
        }
        money-=prices[i];
    }
    printf("%d\n",money);
    return 0;
}