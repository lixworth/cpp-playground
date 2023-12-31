//
// Created by Worth Lix on 2023/11/5 19:39.
//
#include <stdio.h>

int check(int handle[]){
  if((handle[0]+handle[1])> handle[2] && (handle[0]+handle[2]) > handle[1] && (handle[1]+handle[2]) > handle[0]){
    return 2;
  }else if((handle[0]+handle[1]) == handle[2] || (handle[0]+handle[2]) == handle[1] || (handle[1]+handle[2]) == handle[0]){
    return 1;
  }else{
    return 0;
  }
}
int main(){
  int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  int handle[3];
  int map[4];
  handle[0] = a;
  handle[1] = b;
  handle[2] = c;

  map[0] = check(handle);

  handle[0] = b;
  handle[1] = c;
  handle[2] = d;

  map[1] = check(handle);

  handle[0] = a;
  handle[1] = c;
  handle[2] = d;
  map[2] = check(handle);

  handle[0] = a;
  handle[1] = b;
  handle[2] = d;

  map[3] = check(handle);
  int result = 0;
  for (int i = 0; i < 4; ++i) {
    if(map[i] > result){
      result = map[i];
    }
  }

  if(result == 0){
    printf("IMPOSSIBLE");
  }else if(result == 1){
    printf("SEGMENT");
  }else{
    printf("TRIANGLE");
  }
  return 0;
}