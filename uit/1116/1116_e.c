//
// Created by Worth Lix on 2023/11/16 19:02.
//

#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);

  if(n%2 == 0){
    printf("%d\n", n-1); // 4 | 1 2 3
  }else{
    printf("%d\n",n-2); // 7 |5 | 1 5 |
  }
  return 0;
}