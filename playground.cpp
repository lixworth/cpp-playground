<<<<<<< HEAD
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
=======
/*
 * Created by LixWorth
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
 **/
#include <bits/stdc++.h>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false), std::cin.tie(nullptr), std::cout.tie(nullptr);

using namespace std;
using ll = long long;

void solve() { cout << "Hello World!" << endl; }

int main() {
    IOS int tt = 1;
    cin >> tt;
    while (tt--) solve();
    return 0;
>>>>>>> 2591bb1fc9d6a562d743c930998d808c56caca9b
}
