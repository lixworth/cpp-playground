//
// Created by Worth Lix on 2023/11/24 19:15.
//
#include <iostream>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--){
    long long n,m;
    cin >> n >> m;
    if(n == 1 && m == 1){
      cout << 1 << endl;
    }else if(n == 1 || m == 1){
      cout << 2 << endl;
    }else{
      cout << 4 << endl;
    }
  }
  return 0;
}