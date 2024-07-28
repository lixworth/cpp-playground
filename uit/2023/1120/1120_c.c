//
// Created by Worth Lix on 2023/11/20 19:23.
//
#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int map[1000000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d",&map[i]);
  }

  int x,y;
  scanf("%d%d",&x,&y);

  for (int i = 0; i < n; ++i) {
    if(map[i] == x){
      if(i == 0){
        if(map[i+1] == y){
          printf("Yes");
        }else{
          printf("No");
        }
      }else{
        if(map[i+1] == y || map[i-1] == y){
          printf("Yes");
        }else{
          printf("No");
        }
      }
      break;
    }
  }
  return 0;
}