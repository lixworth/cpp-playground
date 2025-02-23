//
// Created by Worth Lix on 2023/11/12 19:16.
//
#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  for (int i = 0; i < t; ++i) {
    int a,b,c,d;
    // 步行去教室需要𝑎分钟，坐小白车需要𝑏分钟，并且小白车每𝑐分钟一班，但是当他到达车站时距离上一辆小白车离开已经过了𝑑(𝑑 < 𝑐) 分钟
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a <= b+(c-d)){
      printf("Walk");
    }else{
      printf("Bus");
    }
    printf("\n");
  }
  return 0;
}