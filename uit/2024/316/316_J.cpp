/*
 * Created by LixWorth on 2024/03/16 19:53
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
//#include <bits/stdc++.h>
#include <cstdio>
#include <map>
#include <iostream>
//#include <algorithm>
#include <vector>

#define FAST_IO std::ios::sync_with_stdio(false);std::cin.tie(nullptr);std::cout.tie(nullptr);

using namespace std;

using ll = long long;

const int N = 1e7;

ll n;
map<ll, ll> m0;
vector<ll> v;

int main() {
    scanf("%d", &n);
    for (ll i = 0; i < n; ++i) {
        ll x;
        scanf("%d", &x);
        m0[x]++;
    }

    for (auto item: m0) {
        if (item.second % 2 != 0) {
            v.push_back(item.first);
        }
    }

    int result = v[0];
    for (ll i = 1; i < v.size(); i++) {
        result = result & v[i];
    }
    printf("%d", result);
}
