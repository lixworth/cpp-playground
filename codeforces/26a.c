//
// Created by Worth Lix on 2023/11/3.
//

#include <stdio.h>

int main(){
    int n,count = 0;
    scanf("%d",&n);
    // 1 2 3 5 7 当数大于10之后，质素的结尾均以1,3,7,9结尾。

    for (int i = 1; i < n; ++i) {
        int k = 1;
        for (int j = 1; j < n; ++j) {
            if(j%k > 10){
                k*=10;
                break;
            }
            if(j > 10){
                if(j%k == 1 || j%k == 3 || j%k == 7||j%k == 9){

                }
            }else{
                if(j == 2 || j == 3 || j == 5 || j == 7){

                }
            }

        }
    }
    printf("%d",count);
    return 0;
}