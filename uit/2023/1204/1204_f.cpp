//
// Created by Worth Lix on 2023/12/4 19:16.
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
  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2; i <= n; ++i) {
      if(checkPrime(i)){
        count++;
      }
    }

    cout << count << endl;
  }
  return 0;
}