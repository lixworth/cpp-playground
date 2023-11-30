//
// Created by Worth Lix on 2023/11/29 19:47.
//
#include <iostream>
#include <cmath>

using namespace std;

long long gcd(long long a,long long b){
  long long temp=0;
  while(b!=0){
    temp=a;
    a=b;
    b=temp%b;
  }
  return a;
}

int main() {
  long long a, b;
  cin >> a >> b;
  cout << a * b / gcd(a, b) << endl;
  return 0;
}