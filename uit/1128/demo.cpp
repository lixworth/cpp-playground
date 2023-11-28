//
// Created by Worth Lix on 2023/11/28 19:06.
//
#include <iostream>
using namespace std;
int main() {
  string input;
  cin >> input;

  int d = input.find('=');

  int result = 0;
  int start = 0;
  int x = 0;
  for (int i = 0; i < input.length(); ++i) {
    if(input[i] == '='){
      cout << result << endl;

      string tmp = input.substr(start,i-start);
      if(isdigit(tmp[tmp.length()-1])){
        if(isdigit(tmp[0])){
          result += stoi(tmp);
        }else if(tmp[0] == '+'){
          result += stoi(tmp.substr(1,tmp.length()-1));
        }else if(tmp[0] == '-'){
          result -= stoi(tmp.substr(1,tmp.length()-1));
        }
      }else{
        if(isdigit(tmp[0])){
          x += stoi(tmp.substr(0,tmp.length()-1));
        }else if(tmp[0] == '+'){
          x += stoi(tmp.substr(1,tmp.length()-1));
        }else if(tmp[0] == '-'){
          x -= stoi(tmp.substr(1,tmp.length()-1));
        }
      }
      start = i+1;
    }else if(input[i] == '+' || input[i] == '-'){
      cout << result << endl;
      if(i > d){
        string tmp = input.substr(start-1,i-start);
        cout << tmp << endl;
        if(isdigit(tmp[tmp.length()-1])){
          if(isdigit(tmp[0])){
            result += stoi(tmp);
          }else if(tmp[0] == '+'){
            result += stoi(tmp.substr(1,tmp.length()-1));
          }else if(tmp[0] == '-'){
            cout << 123 << endl;
          }
        }else{
          if(isdigit(tmp[0])){
            x += stoi(tmp.substr(0,tmp.length()-1));
          }else if(tmp[0] == '+'){
            x += stoi(tmp.substr(1,tmp.length()-1));
          }else if(tmp[0] == '-'){
            x -= stoi(tmp.substr(1,tmp.length()-1));
          }
        }
      }else{
        string tmp = input.substr(start,i-start);
        if(isdigit(tmp[tmp.length()-1])){
          if(isdigit(tmp[0])){
            result -= stoi(tmp);
          }else if(tmp[0] == '+'){
            result -= stoi(tmp.substr(1,tmp.length()-1));
          }else if(tmp[0] == '-'){
            result += stoi(tmp.substr(1,tmp.length()-1));
          }
        }else{
          if(isdigit(tmp[0])){
            x -= stoi(tmp.substr(0,tmp.length()-1));
          }else if(tmp[0] == '+'){
            x -= stoi(tmp.substr(1,tmp.length()-1));
          }else if(tmp[0] == '-'){
            x += stoi(tmp.substr(1,tmp.length()-1));
          }
        }
      }
      start = i;
    }else if(i == input.length()-1){
      cout << result << endl;

      string tmp = input.substr(start,i-start+1);
      if(isdigit(tmp[tmp.length()-1])){
        if(isdigit(tmp[0])){
          result -= stoi(tmp);
        }else if(tmp[0] == '+'){
          result -= stoi(tmp.substr(1,tmp.length()-1));
        }else if(tmp[0] == '-'){
          result += stoi(tmp.substr(1,tmp.length()-1));
        }
      }else{
        if(isdigit(tmp[0])){
          x -= stoi(tmp.substr(0,tmp.length()-1));
        }else if(tmp[0] == '+'){
          x -= stoi(tmp.substr(1,tmp.length()-1));
        }else if(tmp[0] == '-'){
          x += stoi(tmp.substr(1,tmp.length()-1));
        }
      }
    }
  }

  cout << result << x;
  return 0;
}