//
// Created by Worth Lix on 2023/11/9 19:25.
//
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char input[100000000];
  scanf("%s",input);
  int l = strlen(input);
  int unit = 1;
  int test = 0;
  for(int i = l; i >= 0; --i) {
    if(input[i] == '0'){
      test += unit * input[i];
    }else{
      test += unit * input[i];
      if(test < 10){
        test += 10*input[i-1];
      }
      break;
    };
    unit*=10;
  }


  if(test%4 == 0){
    printf("1");
  }else{
    printf("-1");
  }
  return 0;
}