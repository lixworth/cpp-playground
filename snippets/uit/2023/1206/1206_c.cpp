//
// Created by Worth Lix on 2023/12/6 19:21.
//
#include <iostream>
#include <cmath>

using namespace std;

int checkPrime(int a){
  for (int i = 2; i <= sqrt(a) ; ++i) {
    if(a%i == 0){
      return 0;
    }
  }
  return 1;
}

int main() {
  int n;
  cin >> n;
  int m = 2;
  while (checkPrime(n+m)){
    m++;
  }

  cout << m << endl;
  return 0;
}