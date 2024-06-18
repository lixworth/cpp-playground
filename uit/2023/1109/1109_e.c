//
// Created by Worth Lix on 2023/11/9 19:25.
//
#include <stdio.h>
#include <string.h>

int main(){
  char input[1000000] = {};
  scanf("%s",input);
  int m = 0;
  int note = 2; // 记录上一个结果

  int start = 0; // 是否为开始元素

  for (int i = 0; i < strlen(input); ++i) {
    if(note == 2){
      note = input[i];
    }else{
      if(start){
        start = 0;
      }else{
        if(note != input[i]){
          m++;
          start = 1;
        }
      }
      note = input[i];
    }
  }
  printf("%d",m);
  return 0;
}