//
// Created by Worth Lix on 2023/11/13 20:01.
//
#include <stdio.h>
#include <math.h>

int checkPrimeNumber(int num) {
  if (num == 1)
    return 0;
  if (num == 2 || num == 3)
    return 1;
  if (num % 6 != 1 && num % 6 != 5)
    return 0;
  int tmp = sqrt(num);
  for (int i = 5; i <= tmp; i += 6)
    if (num % i == 0 || num % (i + 2) == 0)
      return 0;
  return 1;
}

int main() {
  int t,n;
  scanf("%d",&t);
  while (t--){
    scanf("%d",&n);
    int count = 0;
    for (int i = 1; i <= n; ++i) {
      if(checkPrimeNumber(i)){
        count++;
      }
    }
    printf("%d\n",count);
  }
  return 0;
}