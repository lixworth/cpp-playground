//
// Created by Worth Lix on 2023/10/31.
//
#include <stdio.h>
int main(){
    int w;
    scanf("%d",&w);
    int part1 = 1;
    int part2 = w-part1;
    int can_cut = 0;
    while (part2 >= 1 && !can_cut){
        if(part1%2 == 0 && part2%2 == 0){
            can_cut = 1;
        }else{
            part1++;
            part2 = w-part1;
        }
    }
    if(can_cut){
        printf("YES, you can divide the watermelon into two even parts.\n");
    }else{
        printf("NO, you can't divide the watermelon into two even parts.\n");
    }
    return 0;
}