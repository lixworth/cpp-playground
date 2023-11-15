//
// Created by Worth Lix on 2023/11/14 20:02.
//

#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  while (n--){
    double M,m,v;
    scanf("%lf%lf%lf",&M,&m,&v);
    printf("%.2lf\n",m*v/(M-m));
  }
  return 0;
}