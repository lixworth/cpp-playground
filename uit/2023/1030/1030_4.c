//
// Created by Worth Lix on 2023/10/30.
//

#include <stdio.h>

int main(){
    int n = 4;
    int caddy[] = {9,8,17,6};

    int j = 0;
    for (int i = 0; i < n; ++i) {
        j+=caddy[i];
    }
    j = j/n;

    for(int i = 0;i<n;i++){
        if(caddy[i+1]-caddy[i]){

        }
    }
//    int max,min;
//    max = caddy[0];
//    min = caddy[0];
//    for (int i = 0; i < n; ++i) {
//        if(caddy[i] > max){
//            max = caddy[i];
//        }
//        if(caddy[i] < min){
//            min = caddy[i];
//        }
//    }
//    int c = j-min;
//    printf("%d%d",max,min);
    return 0;
}
