//
// Created by Worth Lix on 2023/11/23 20:07.
//
#include <iostream>

using namespace std;

int main() {
  string input;
  cin >> input;

  if (input.length() <= 3) {
    if (stoi(input) >= -128 && stoi(input) <= 127) {
      cout << "byte" << endl;
    } else {
      cout << "short" << endl;
    }
  } else if (input.length() <= 5) {
    if (stoi(input) >= -32768 && stoi(input) <= 32767) {
      cout << "short" << endl;
    } else {
      cout << "int" << endl;
    }
  } else if (input.length() <= 10) {
    if (stol(input) >= -2147483648 && stoi(input) <= 2147483647) {
      cout << "int" << endl;
    } else {
      cout << "long" << endl;
    }
  } else if (input.length() <= 19) {
    if(input >= "-9223372036854775808" && input <= "9223372036854775807"){
      cout << "long" << endl;
    }else{
      cout << "BigInteger" << endl;
    }
  } else {
    cout << "BigInteger" << endl;
  }
  return 0;
}