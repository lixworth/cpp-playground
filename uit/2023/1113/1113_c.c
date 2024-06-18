//
// Created by Worth Lix on 2023/11/13 19:10.
//

#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int score = n;

  // 2*(2*x+2)+1 = 4*x+5 GN 单 15
  // 2*(2*x+1)+2 = 4*x+4 NG 双 16
  // N 2x+1
  // G 2x+2

  char out[1000000] = {};
  int out_index = 0;
  while (score != 0){
    if((score-1)%2 == 0){
      out[out_index] = 'N';
      out_index++;
      score = (score-1)/2;
    }else if((score-2)%2 == 0){
      out[out_index] = 'G';
      out_index++;
      score = (score-2)/2;
    }else{
      printf("?");
    }
  }

  for (int i = out_index-1; i >= 0; --i) {
    printf("%c",out[i]);
  }
  return 0;
}