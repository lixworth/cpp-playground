//
// Created by Worth Lix on 2023/11/27 19:40.
//
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--){
    int n,k;
    cin >> n >> k;

    string input;
    cin >> input;
    int win = 0;
    int star = 0;
    for (const auto &item : input){
      if(item == 'W'){
        win++;
        if(win < 3){
          star++;
        }else{
          star+=k;
        }
      }else{
        win = 0;
        star--;
      }
    }

    cout << star << endl;
  }
  return 0;
}