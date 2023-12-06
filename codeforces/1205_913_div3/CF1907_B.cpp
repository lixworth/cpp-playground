//
// Created by Worth Lix on 2023/12/5 23:17.
//
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); ++i) {
      if(i == 0){
        if(input[i] == 'B' || input[i] == 'b'){
          input[i] = 48;
        }
      }
      if(input[i] == 'B'){
        int a = i-1;
        while ( a > 0 && (input[a] == 48 || (islower(input[a]) != 0))){
          a--;
        }
        if(a == 0){
          if(isupper(input[a])){
            input[a] = 48;
          }
        }else{
          input[a] = 48;
        }
        input[i] = 48;
      }else if(input[i] == 'b'){
        int a = i-1;
        while ( a > 0 && (input[a] == 48 || (isupper(input[a]) != 0))){
          a--;
        }
        if(a == 0){
          if(islower(input[a])){
            input[a] = 48;
          }
        }else{
          input[a] = 48;
        }
        input[i] = 48;
      }
    }
    for (int j = 0; j < input.length(); ++j) {
      if(input[j] != 48){
        cout << input[j];
      }
    }
    cout << endl;
  }
  return 0;
}