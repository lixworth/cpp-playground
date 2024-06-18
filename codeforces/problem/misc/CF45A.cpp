//
// Created by Worth Lix on 2023/11/3.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string months[13] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    string input;
    int after;
    cin >> input;
    cin >> after;
    while (after > 12){
        after = after%12;
    }
    for (int i = 0; i < 12; ++i) {
        if(input == months[i]){
            if(i+after > 11){
               cout << months[i+after-12];
            }else{
                cout << months[i+after];
            }
            break;
        }
    }
    return 0;
}