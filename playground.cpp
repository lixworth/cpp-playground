#include <bits/stdc++.h>

std::string test1(int year) {
    if (year % 400 == 0) {
        return "leap year";
    } else if (year % 4 == 0, year % 100 != 0) {
        return "leap year";
    } else {
        return "not leap year";
    }
}

std::string test2(int year) {
    if (year % 400 == 0) {
        return "leap year";
    } else if (year % 4 == 0 && year % 100 != 0) {
        return "leap year";
    } else {
        return "not leap year";
    }
}
int main() {
    for (int i = 2000; i < 3000; i++) {
        if (test1(i).compare(test2(i)) != 0)
            std::cout << i << "|" << test1(i) << "|" << test2(i) << std::endl;
    }
}
