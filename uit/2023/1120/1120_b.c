//
// Created by Worth Lix on 2023/11/20 19:07.
//

#include <stdio.h>

int main() {
  int q;
  scanf("%d", &q);
  while (q--) {
    int m, x;
    scanf("%d%d", &m, &x);

    if(x % m == 0){
      printf("%d\n",m);
    }else{
      printf("%d\n",x % m);
    }
  }
  return 0;
}