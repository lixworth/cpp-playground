//
// Created by Worth Lix on 2023/11/6 19:02.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(){
  char input[1000000] = {};
  scanf("%s\n",input);
  // 大写 65-90 小写 97-122 数字 48-57
  int black[1000000] = {};
  long long index = 0;
  int count = 0;
  for (long long i = 0; i < strlen(input); ++i) {
    int run = 1;
    for (int j = 0; j < index; ++j) {
      if(black[j] == toascii(input[i])){
        run = 0;
        break;
      }
    }
    if(run){
      count++;
      black[index] = toascii(input[i]);
      index++;
    }
  }
  printf("%d\n",count);
  return 0;
}