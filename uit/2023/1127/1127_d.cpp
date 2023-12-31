//
// Created by Worth Lix on 2023/11/27 19:04.
//
#include <iostream>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string input;
    cin >> input;
    if (input.length() != 5) {
      cout << "No" << endl;
    } else {
      string temp = "Baidu";
      int check = 1;
      for (const auto &item : temp) {
        if (input.find(item) > 5) {
          check = 0;
          break;
        }
      }
      if (check) {
        cout << "Yes" << endl;
      } else {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}