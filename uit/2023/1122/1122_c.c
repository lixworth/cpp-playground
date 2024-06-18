//
// Created by Worth Lix on 2023/11/22 19:43.
//
#include <stdio.h>
#include <string.h>

int main() {
  char input[100000] = {};
  int flag = 1;
  while (scanf("%s",input) != EOF){
    for (int i = strlen(input)-1; i >= 0; i--) {
      printf("%c",input[i]);
    }
    if(flag){
      flag = 0;
    }else{
      flag = 1;
      printf("\n");
    }
  }
  return 0;
}