//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>
#include <math.h>

int main(){
    long long count;
    scanf("%lld\n",&count);
    for (long long i = 0; i < count; ++i) {
      long long n,m;
      scanf("%lld %lld\n",&n,&m);
      if(n < m || n < m*2+1){
        printf("-1\n");
      }else{
        printf("%lld %lld\n",m,n-m);
      }
    }
    return 0;
}