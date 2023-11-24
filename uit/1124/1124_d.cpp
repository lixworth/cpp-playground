//
// Created by Worth Lix on 2023/11/24 19:24.
//
#include <iostream>
#include <math.h>

using namespace std;

int main() {
 long long input;
 cin >> input;
 long long x = input;
 long long add = 0;
 long long add_time = 0;
 long long first =1 ;
 while (x>0) {
   if (first) {
     x /= 10;
     first = 0;
     continue;
   }
   add = add * 10 + x % 10;
   add_time++;
   x /= 10;
 }
 input*=pow(10,add_time);
 input+= add;

 for (long long i = 2; i <= sqrt(input) ; ++i) {
   if(input%i == 0){
     cout << "noprime" << endl;
     return 0;
   }
 }
 cout << "prime" << endl;
 return 0;
}