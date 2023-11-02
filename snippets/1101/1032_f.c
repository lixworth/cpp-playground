//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>
#include <math.h>

int main(){
//    int n;
//    scanf("%d\n",&n);
    int record[] = {};
    int index = 0;
    int n,m;
    scanf("%d %d\n",&n,&m);
    int ok = 0;
    for (int j = 0; j <= pow(10,9); ++j) { // a
        if(ok){
            break;
        }
        for (int k = 1; k < pow(10,9); ++k) { // b
            if(j+k == n && j%k == m){
                printf("%d %d",j,k);
                ok = 1;
                break;
            }
        }
    }
    return 0;
}