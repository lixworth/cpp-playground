//
// Created by Worth Lix on 2023/11/8 17:27.
//
#include <math.h>
#include <stdio.h>

int main(){
  int n,k;
  scanf("%d%d\n",&n,&k);
  if(k%2 == 0){
    printf("%.2lf",pow(1.0*n/(k/2+1),2));
  }else{
    printf("%.2lf",(1.0*n/(k/2+1))*(1.0*n/(k-(k/2)+1))) ;
  }
  return 0;
}