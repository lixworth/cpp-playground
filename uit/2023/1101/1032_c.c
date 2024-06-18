//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>

int main(){
    int count;
    scanf("%d",&count);
    for (int i = 0; i < count; ++i) {
        int a,b,n;
        scanf("%d%d%d",&a,&b,&n);
        if(n%2){
            printf("Alice\n");
        }else{
            printf("Bob\n");
        }
    }
    return 0;
}