//
// Created by Worth Lix on 2023/11/29 19:16.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--){
    int input;
    cin >> input;

    int tmp = 10;

    while (input%tmp == 0){
      tmp*=10;
    }
    cout << tmp-input%tmp << endl;
  }
  return 0;
}