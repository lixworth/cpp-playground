/*
 * Created by LixWorth (Device: MINIPC-SER7 WIN11)
 * Github: https://github.com/lixworth/
 * Website: https://blog.lix.moe/
 * Contact: lixworth@outlook.com
**/
#include <bits/stdc++.h>
#define endl "\n"
#define IOS std::ios::sync_with_stdio(false),std::cin.tie(nullptr),std::cout.tie(nullptr);

using namespace std;
using ll = long long;

const int N = 2e5+9;
int arr[N];

string SearchMaxLengthSequence(string s1, string s2)
{
    int length1 = s1.length();
    int length2 = s2.length();
    int** matrix = new int*[length1 + 1];
    for (size_t i = 0; i < length1 + 1; i++)
    {
        matrix[i] = new int[length2 + 1]();
    }

    for (size_t i = 1; i <= length1; i++)
    {
        for (size_t j = 1; j <= length2; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                matrix[i][j] = matrix[i - 1][j - 1] + 1;
            }
            else
            {
                matrix[i][j] = max(matrix[i][j - 1], matrix[i - 1][j]);
            }
        }
    }

    int commomLength = matrix[length1][length2];
    string commomStr = "";
    while (length1 != 0)
    {
        if (matrix[length1][length2] == matrix[length1 - 1][length2])
        {
            length1--;
            continue;
        }
        if (matrix[length1][length2] == matrix[length1][length2 - 1])
        {
            length2--;
            continue;
        }
        if (matrix[length1][length2] == matrix[length1 - 1][length2 - 1] + 1)
        {
            commomStr += s1[length1 - 1];
            length1--;
            length2--;
        }
    }
    reverse(commomStr.begin(), commomStr.end());
    return commomStr;

}
void solve(){
	int n,q;
	cin >> n >> q;
	string a,b;
	cin >> a >> b;
	while(q--){
		int l,r;
		cin >> l >> r;
		string action1 = a.substr(l-1,r-l+1);
		string action2 = b.substr(l-1,r-l+1);
		sort(action1.begin(),action1.end());
		sort(action2.begin(),action2.end());
		cout << (action1.size()-(SearchMaxLengthSequence(action1,action2).size())) << endl;
	}
}

int main(){
	IOS
	int tt = 1;
	cin >> tt;
	while(tt--) solve();
	return 0;
}