//
// Created by Worth Lix on 2023/11/9 19:51.
//
#include <stdio.h>
#include <string.h>

int main(){
  char input[1000000] = {};
  int k;
  scanf("%s %d",input,&k);

  char map[100000] = {};
  for (int i = 0; i < k; ++i) {
    map[k-1-i] = input[i];
  }
  int is_start = 1;
  for (int i = 0; i < k ; ++i) {
    if(is_start){
      if(map[i] == '0'){
        continue;
      }else{
        is_start = 0;
      }
    }
    printf("%c",map[i]);
  }
  for (int i = k; i < strlen(input); ++i) {
    printf("%c",input[i]);
  }
  return 0;
}