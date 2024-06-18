//
// Created by Worth Lix on 2023/11/12 19:20.
//
#include <stdio.h>
#include <string.h>

int main(){
  char input[100] = {};
  scanf("%s",input);

  for (int i = 0; i < strlen(input); ++i) {
    if(input[i] == '1'){
      printf("hongliyu");
    }else if(input[i] == '2'){
      printf("lvliyu");
    }else{
      printf("lv");
    }
  }
  return 0;
}