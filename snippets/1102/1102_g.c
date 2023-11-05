//
// Created by Worth Lix on 2023/11/2.
//
#include <stdio.h>

int main(){
    int n,m;
    int record[10] = {};
    scanf("%d %d\n",&n,&m);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&record[i]);
    }
    int level = 2;// 伤害
    int boss = 0;
    for (int i = 0; i < m; ++i) {
        for (int r = 0; r < n; ++r) {
            if(record[r] == 0){
                continue;
            }
            if(record[r] - level == 0){
                level++;
            }
            if(record[r] - level > 0){
                record[r] = record[r] - level;
            }else{
                record[r] = 0;
            }
        }
        boss += level;
    }

    printf("%d",boss);
    return 0;
}