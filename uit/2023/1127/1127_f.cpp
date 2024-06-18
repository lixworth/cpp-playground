//
// Created by Worth Lix on 2023/11/27 19:10.
//
#include <iostream>
using namespace std;
int main() {
  string input;
  getline(cin, input);

  cout << input.substr(0, input.length() - 3) << endl;
  return 0;
}