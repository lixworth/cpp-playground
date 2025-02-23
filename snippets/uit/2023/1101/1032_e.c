//
// Created by Worth Lix on 2023/11/1.
//
#include <stdio.h>

int main(){
  int count;
  scanf("%d\n",&count);
  for (int i = 0; i < count; ++i) {
    int s;
    int none = 1;
    scanf("%d",&s);
    int numbers[10000] = {};
    for (int j = 0; j < s; ++j) {
      scanf("%d",&numbers[j]);
    }
    if(numbers[0]%2 != 0){
      printf("0");
      none = 0;
    }else{
      for (int j = 0; j < s; ++j) {
        if(numbers[j]%2 != 0 && numbers[j] < numbers[0]){
          printf("1");
          none = 0;
          break;
        }
      }
    }
    if(none){
      printf("-1");
    }
    printf("\n");
  }
  return 0;
}