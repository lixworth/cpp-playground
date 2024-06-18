//
// Created by Worth Lix on 2023/11/2.
//
#include <stdio.h>

int main(){
    int date;
    scanf("%d",&date);
    int month = date%100;
    if(month <= 2 || month == 12){
        printf("winter");
    }else if(month <= 5){
        printf("spring");
    }else if(month >=6 && month <= 8){
        printf("summer");
    }else if(month <= 11){
        printf("autumn");
    }
    return 0;
}