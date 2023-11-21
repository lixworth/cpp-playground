//
// Created by Worth Lix on 2023/11/21 19:28.
//
#include <string>
#include <iostream>

using namespace std;
int main() {
  string a,b;
  cin >> a >> b;
  int count = 0;
  int p = 0;
  while (( p = a.find(b,p)) != string::npos){
    count++;
    p++;
  }
  cout << count << endl;
  return 0;
}