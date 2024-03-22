#include <bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    cin >> n;
    while (n--) {
        string input;
        double h;
        cin >> input >> h;
        if (input[0] == 'M') {
            cout << fixed << setprecision(2) << h * 1.0 / 1.09 << endl;
        } else {
            cout << fixed << setprecision(2) << h * 1.09 << endl;
        }
    }
    return 0;
}