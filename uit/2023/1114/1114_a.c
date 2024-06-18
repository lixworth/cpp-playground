//
// Created by Worth Lix on 2023/11/14 19:03.
//

#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  for (int i = 1; i <= n; ++i) {
    if(i%4 != 0){
      int m = i; // 44
      int check = 1;
      while (m > 0){
        if(m%10 == 4){
          check = 0;
          break;
        }
        m = m/10;
      }
      if(check) printf("%d\n",i);
    }
  }
  return 0;
}