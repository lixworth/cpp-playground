//
// Created by Worth Lix on 2023/11/7 19:02.
//
#include <stdio.h>

int get_result(int data[1000000],int n,int k){
  for (int i = 0; i < n ; ++i) {
    for (int j = 0; j <n-1; ++j) {
      if(data[j+1] < data[j]){
        data[j] = data[j+1];
        int tmp = data[j+1];
        data[j+1] = tmp;
      }
    }
  }
  return data[k-1];
}
int main() {
  int n,m,k;
  scanf("%d%d%d\n",&n,&m,&k);
  int data[1000000] = {};
  for (int i = 0; i < n; ++i) {
    scanf("%d",&data[i]);
  }
  int action,tmp = 0;
  while (scanf("%d",&action,&tmp) != EOF){
    printf("%d",action);
    printf("%d\n",tmp);
  }
  return 0;
}