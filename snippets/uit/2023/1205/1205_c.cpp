//
// Created by Worth Lix on 2023/12/5 20:03.
//
#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string input;
    cin >> input;
    int n = 0, s = 0, b = 0, f = 0;

    for (const auto &item : input) {
      if (isdigit(item)) {
        n++;
      } else if (item == ',' || item == '.' || item == '?' || item == '!') {
        f++;
      } else {
        if (islower(item)) {
          s++;
        } else {
          b++;
        }
      }
    }

    int count = 0;
    // 10个数字 26个英文字母 四个符合
    if(n >= 2){
      count += n*(26+26+9+4);
    }else{
      count += 9;
    }
    if(s >= 2){
      count += s*(25+26+10+4);
    }else{
      count += 25;
    }

    if(b >= 2){
      count += b*(25+26+10+4);
    }else{
      count += 25;
    }

    if(f >= 2){
      count += f*(26+26+10+3);
    }else{
      count += 3;
    }
    cout << count << endl;
  }
  return 0;
}