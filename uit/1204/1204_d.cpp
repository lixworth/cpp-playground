//
// Created by Worth Lix on 2023/12/4 19:23.
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
  string input;
  cin >> input;

  int c = 0,s = 0,u=0;

  for (int i = 0; i < input.length(); ++i) {
    if(i+1 == 1)
      continue;
    if(input[i] == 'C'){
      if(checkPrime(i+1)){
        c++;
      }
    }else if(input[i] == 'S'){
      if(checkPrime(i+1)) {
        s++;
      }
    }else if(input[i] == 'U'){
      if(checkPrime(i+1)) {
        u++;
      }
    }
    if(c >= 2 && s >=1 && u >=1 ){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}