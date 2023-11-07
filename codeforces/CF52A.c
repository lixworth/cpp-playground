//
// Created by Worth Lix on 2023/11/5 20:12.
//
#include <stdio.h>

int main(){
  int count;
  scanf("%d\n",&count);
  int t[3]= {0,0,0};
  for (int i = 0; i < count; ++i) {
    int tmp;
    scanf("%d",&tmp);
    if(tmp == 1){
      t[0]++;
    }else if(tmp == 2){
      t[1]++;
    }else{
      t[2]++;
    }
  }

  if(t[0] >= t[1] && t[0] >= t[2]){
    printf("%d",count-t[0]);
  }else if(t[1] >= t[0] && t[1] >= t[2]){
    printf("%d",count-t[1]);
  } else{
    printf("%d",count-t[2]);
  }
  return 0;
}