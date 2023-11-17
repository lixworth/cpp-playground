//
// Created by Worth Lix on 2023/11/16 19:10.
//
#include <stdio.h>
#include <math.h>

int main() {
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);

  // hang a+b c+d
  // lie a+c b+d

  if(abs((a+b)-(c+d)) == abs((a+c)-(b+d))){
    printf("YES");
  }else{
    printf("NO");
  }
  return 0;
}