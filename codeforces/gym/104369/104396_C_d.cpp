#include<iostream>
#include<algorithm>
#include<map>
#include<set>
#include<list>
#include<vector>
#include<string>
#include<stack>
#include<sstream>
#include<math.h>
#include<queue>
#include<utility>

#define ll long long
#define IOS std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//using namespace std;

using std::max;
using std::min;
using std::cin;
using std::cout;
using std::endl;
using std::sort;

const int N = 1e5 + 10;
ll a[N];
ll sum[N];
std::pair<int, int> pr[N];

long long int fpow(ll base, ll power) // 快速幂
{
    long long int result = 1;
    while (power > 0) {
        if (power & 1) {
            result = base * result;
        }
        power >>= 1;
        base = base * base;
    }
    return result;
}


//bool check(){}

void solve() {
    int n;
    cin >> n;
    long long res = 0;
    for (int i = 0; i < n; i++) {
        cin >> pr[i].first >> pr[i].second;
    }
    sort(pr, pr + n);
    long long idx = 0;
    for (int i = 0; i < n; i++) {
        idx += pr[i].second;
    }
    if (idx % 2)idx--;
    long long iidx = idx;
    for (int i = n - 1; i >= 0; i--) {
        if (iidx >= idx / 2) {
            if (pr[i].second > iidx - idx / 2) {
                res += pr[i].first * (iidx - idx / 2);
                res -= pr[i].first * (pr[i].second - (iidx - idx / 2));
            } else res += pr[i].first * pr[i].second;
            iidx -= pr[i].second;
            // cout << res << endl;
        } else {
            res -= pr[i].first * pr[i].second;
            iidx -= pr[i].second;
        }
    }
    cout << res << endl;
}


int main() {
    IOS
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}

// shuiyunshen
// yanxiazhi
//A heart that`s broke is a heart that`s been loved


/*
⣿⣿⣿⣿⣿⣿⡷⣯⢿⣿⣷⣻⢯⣿⡽⣻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠸⣿⣿⣆⠹⣿⣿⢾⣟⣯⣿⣿⣿⣿⣿⣿⣽⣻⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣻⣽⡿⣿⣎⠙⣿⣞⣷⡌⢻⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⡄⠹⣿⣿⡆⠻⣿⣟⣯⡿⣽⡿⣿⣿⣿⣿⣽⡷⣯⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣟⣷⣿⣿⣿⡀⠹⣟⣾⣟⣆⠹⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢠⡘⣿⣿⡄⠉⢿⣿⣽⡷⣿⣻⣿⣿⣿⣿⡝⣷⣯⢿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣯⢿⣾⢿⣿⡄⢄⠘⢿⣞⡿⣧⡈⢷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣧⠘⣿⣷⠈⣦⠙⢿⣽⣷⣻⣽⣿⣿⣿⣿⣌⢿⣯⢿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣟⣯⣿⢿⣿⡆⢸⡷⡈⢻⡽⣷⡷⡄⠻⣽⣿⣿⡿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣏⢰⣯⢷⠈⣿⡆⢹⢷⡌⠻⡾⢋⣱⣯⣿⣿⣿⣿⡆⢻⡿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⡎⣿⢾⡿⣿⡆⢸⣽⢻⣄⠹⣷⣟⣿⣄⠹⣟⣿⣿⣟⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⡇⢸⣯⣟⣧⠘⣷⠈⡯⠛⢀⡐⢾⣟⣷⣻⣿⣿⣿⡿⡌⢿⣻⣿⣿
⣿⣿⣿⣿⣿⣿⣧⢸⡿⣟⣿⡇⢸⣯⣟⣮⢧⡈⢿⣞⡿⣦⠘⠏⣹⣿⣽⢿⣿⣿⣿⣿⣯⣿⣿⣿⡇⢸⣿⣿⣾⡆⠹⢀⣠⣾⣟⣷⡈⢿⣞⣯⢿⣿⣿⣿⢷⠘⣯⣿⣿
⣿⣿⣿⣿⣿⣿⣿⡈⣿⢿⣽⡇⠘⠛⠛⠛⠓⠓⠈⠛⠛⠟⠇⢀⢿⣻⣿⣯⢿⣿⣿⣿⣷⢿⣿⣿⠁⣾⣿⣿⣿⣧⡄⠇⣹⣿⣾⣯⣿⡄⠻⣽⣯⢿⣻⣿⣿⡇⢹⣾⣿
⣿⣿⣿⣿⣿⣿⣿⡇⢹⣿⡽⡇⢸⣿⣿⣿⣿⣿⣞⣆⠰⣶⣶⡄⢀⢻⡿⣯⣿⡽⣿⣿⣿⢯⣟⡿⢀⣿⣿⣿⣿⣿⣧⠐⣸⣿⣿⣷⣿⣿⣆⠹⣯⣿⣻⣿⣿⣿⢀⣿⢿
⣿⣿⣿⣿⣿⣿⣿⣿⠘⣯⡿⡇⢸⣿⣿⣿⣿⣿⣿⣿⣧⡈⢿⣳⠘⡄⠻⣿⢾⣽⣟⡿⣿⢯⣿⡇⢸⣿⣿⣿⣿⣿⣿⡀⢾⣿⣿⣿⣿⣿⣿⣆⠹⣾⣷⣻⣿⡿⡇⢸⣿
⣿⣿⣿⣿⣿⣿⣿⣿⡇⢹⣿⠇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠻⡇⢹⣆⠹⣟⣾⣽⣻⣟⣿⣽⠁⣾⣿⣿⣿⣿⣿⣿⣇⣿⣿⠿⠛⠛⠉⠙⠋⢀⠁⢘⣯⣿⣿⣧⠘⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⡈⣿⡃⢼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡙⠌⣿⣆⠘⣿⣞⡿⣞⡿⡞⢠⣿⣿⣿⣿⣿⡿⠛⠉⠁⢀⣀⣠⣤⣤⣶⣶⣶⡆⢻⣽⣞⡿⣷⠈⣿
⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠘⠁⠉⠉⠉⠉⠉⠉⠉⠉⠉⠙⠛⠛⢿⣄⢻⣿⣧⠘⢯⣟⡿⣽⠁⣾⣿⣿⣿⣿⣿⡃⢀⢀⠘⠛⠿⢿⣻⣟⣯⣽⣻⣵⡀⢿⣯⣟⣿⢀⣿
⣿⣿⣿⣟⣿⣿⣿⣿⣶⣶⡆⢀⣿⣾⣿⣾⣷⣿⣶⠿⠚⠉⢀⢀⣤⣿⣷⣿⣿⣷⡈⢿⣻⢃⣼⣿⣿⣿⣿⣻⣿⣿⣿⡶⣦⣤⣄⣀⡀⠉⠛⠛⠷⣯⣳⠈⣾⡽⣾⢀⣿
⣿⢿⣿⣿⣻⣿⣿⣿⣿⣿⡿⠐⣿⣿⣿⣿⠿⠋⠁⢀⢀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣌⣥⣾⡿⣿⣿⣷⣿⣿⢿⣷⣿⣿⣟⣾⣽⣳⢯⣟⣶⣦⣤⡾⣟⣦⠘⣿⢾⡁⢺
⣿⣻⣿⣿⡷⣿⣿⣿⣿⣿⡗⣦⠸⡿⠋⠁⢀⢀⣠⣴⢿⣿⣽⣻⢽⣾⣟⣷⣿⣟⣿⣿⣿⣳⠿⣵⣧⣼⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣽⣳⣯⣿⣿⣿⣽⢀⢷⣻⠄⠘
⣿⢷⣻⣿⣿⣷⣻⣿⣿⣿⡷⠛⣁⢀⣀⣤⣶⣿⣛⡿⣿⣮⣽⡻⣿⣮⣽⣻⢯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢀⢸⣿⢀⡆
⠸⣟⣯⣿⣿⣷⢿⣽⣿⣿⣷⣿⣷⣆⠹⣿⣶⣯⠿⣿⣶⣟⣻⢿⣷⣽⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢀⣯⣟⢀⡇
⣇⠹⣟⣾⣻⣿⣿⢾⡽⣿⣿⣿⣿⣿⣆⢹⣶⣿⣻⣷⣯⣟⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢀⡿⡇⢸⡇
⣿⣆⠹⣷⡻⣽⣿⣯⢿⣽⣻⣿⣿⣿⣿⣆⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⢸⣿⠇⣼⡇
⡙⠾⣆⠹⣿⣦⠛⣿⢯⣷⢿⡽⣿⣿⣿⣿⣆⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠎⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⢀⣿⣾⣣⡿⡇
⣿⣷⡌⢦⠙⣿⣿⣌⠻⣽⢯⣿⣽⣻⣿⣿⣿⣧⠩⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⢰⢣⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⢀⢀⢿⣞⣷⢿⡇
⣿⣽⣆⠹⣧⠘⣿⣿⡷⣌⠙⢷⣯⡷⣟⣿⣿⣿⣷⡀⡹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣈⠃⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢀⣴⡧⢀⠸⣿⡽⣿⢀
⢻⣽⣿⡄⢻⣷⡈⢿⣿⣿⢧⢀⠙⢿⣻⡾⣽⣻⣿⣿⣄⠌⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⢁⣰⣾⣟⡿⢀⡄⢿⣟⣿⢀
⡄⢿⣿⣷⢀⠹⣟⣆⠻⣿⣿⣆⢀⣀⠉⠻⣿⡽⣯⣿⣿⣷⣈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⢀⣠⠘⣯⣷⣿⡟⢀⢆⠸⣿⡟⢸
⣷⡈⢿⣿⣇⢱⡘⢿⣷⣬⣙⠿⣧⠘⣆⢀⠈⠻⣷⣟⣾⢿⣿⣆⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⣠⡞⢡⣿⢀⣿⣿⣿⠇⡄⢸⡄⢻⡇⣼
⣿⣷⡈⢿⣿⡆⢣⡀⠙⢾⣟⣿⣿⣷⡈⠂⠘⣦⡈⠿⣯⣿⢾⣿⣆⠙⠻⠿⠿⠿⠿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⢋⣠⣾⡟⢠⣿⣿⢀⣿⣿⡟⢠⣿⢈⣧⠘⢠⣿
⣿⣿⣿⣄⠻⣿⡄⢳⡄⢆⡙⠾⣽⣿⣿⣆⡀⢹⡷⣄⠙⢿⣿⡾⣿⣆⢀⡀⢀⢀⢀⢀⢀⢀⢀⢀⢀⢀⢀⢀⣀⣠⣴⡿⣯⠏⣠⣿⣿⡏⢸⣿⡿⢁⣿⣿⢀⣿⠆⢸⣿
⣿⣿⣿⣿⣦⡙⣿⣆⢻⡌⢿⣶⢤⣉⣙⣿⣷⡀⠙⠽⠷⠄⠹⣿⣟⣿⣆⢙⣋⣤⣤⣤⣄⣀⢀⢀⢀⢀⣾⣿⣟⡷⣯⡿⢃⣼⣿⣿⣿⠇⣼⡟⣡⣿⣿⣿⢀⡿⢠⠈⣿
⣿⣿⣿⣿⣿⣷⣮⣿⣿⣿⡌⠁⢤⣤⣤⣤⣬⣭⣴⣶⣶⣶⣆⠈⢻⣿⣿⣆⢻⣿⣿⣿⣿⣿⣿⣷⣶⣤⣌⣉⡘⠛⠻⠶⣿⣿⣿⣿⡟⣰⣫⣴⣿⣿⣿⣿⠄⣷⣿⣿⣿
*/

/**
                                                                                   .@@
                                                                                  .@@@@
                                                     :--:::::::-----==:           %%@@@%
                                             :*++*+==--========----------:-==:    @%@@@@.
                                        .:. ..-=+=+*+==---=----------------------:*@%@@@@         .:..
                                    .::::-----==+++====+***#+----=------:--------:-=%%@@@#+%@@@@@@@@@@@@@@@@@@@@@@@
                :+%@@@@@@@@@@@@@@%::::=*=+++++=++==*%*=-:=*#+##=-----------------:::-@%@@@@@@@@@@@@@@@@@@@@@@@@@@@*
             %%%%%%%%%%%%@@@@@@= .:=%@@@@@%#+=+++%@@@%+-==--++-=*=-------------:-----:*@@@@@@@@@@@@@@@@@@@@@@@@@@%
             .@%%%%%%%%%@@@@%-  .-+%@@@%@%%%####%#*#%%%%==----+=:-++-::------=----:::-:=@@@@@@@@@@@@@@@@@@@@@@@@%
               %%%%%%%%@%@@+  .::*%@@@@%#**#####******+*%+===---+=..:==---------:---::::-@@@@@@@@@@@@@@@@@@@@@@@
                %%%@%@%@@@:  .:.%%%%%#=+*+*+*#*+=+***+*#+##=--=-:-+.   ==--------::::--::-@@@@@@@@@@@@@@@@@@@@@
                .#%%%@%@%   . -@%%%*==+*++++**+++=+*++=++=+#--=----=:    +---:-::::::::--:-%@@@@@@@@@@@@@@@@@@=
                 :@%%%@=   . =%%%#---======+=========++=====*+--=-=--=.    --::::::::::::--=@@@@@@@@@@@@@@@@@@@:
                  @%@#   .  -%%*+---========-:===++======-==-==--=-----:     :-::::::::::::-=@@@@@@@@@@@@@@@@@@@=
                  @#.   .  .#*=+.-=-==-==-=-::===+=-==-=--=--==+=:------=     .-:::::::-:--:--#@@@@@@@@@@@@@@@@@@#
                 -         #+=-.:----=------.:-=-*===----==--==-+=-:::-::-:     :-::::::::::::==+@@@@@@@@@@@@@@@@@@
                     .    -==:..-=--==--:--:.-===+====----=====--=--::::::--      ::::::::::--:=%*=*@@@@@@@@@@@@@@@@.
                .+: .    .==-. :----==-::--:.---==-===---:------:----::::::-+       -:::------=--+#+#@@@@@@@@@@@@@@@@.
              .  . -    ::--. .::---:-:.-=-: :--==--==:=--:-::::::--=-:::-:::*.      :::-==-==--:--**@@@@@@@%@@@@@@@@@=
                :.:     :::.. .--:::::: --::.:-:---:--:--:::::::::--:==:::::::+.       -:-=-=------:*+@@@@@@@@+ #@@@@@@
               #-.     -::.. .=+:::::-:.--:-:.::::::::::+:::::::::::::=-:::::::=.       :=-=---------=%@@@@@@@@@  :@@@@
             =@-.     :=..   -=::::-:=.:::::-.::::::::::%.::::::::::::-=:::::::-+-        *%+=-------::%@@@@@@@@@:   :.
            #@*.      +-..  :-:::::::-..::::::.:::::::::%:-==:..::::::--+:::-:-====        :*%*+--------@@@@@@@@@@@
          .@@#       :=:   .::::::::-:.::::::-.::::::.::#.:-=-.:..::-.::-+:-=--===-=         -#++*+===-:#@@@@@@@@@@@@
         *@@*.    .  --.  .:::::::::-..::::.:::.::..:..-+:: :.......=-.::==--==-====-         .**++++++=*@@@@@@@@@@@@@@:
       =@@@==.   .: .=-.  ::::::.:::= .::::...::.-.....+::.  - :....:*::--==--=======-          -*++=+=++@@@@@@@@@@@@@@@@@@%-
     +@@@@::- . .:- :=-. .::::::.::=- .::......=.=.....+ :.  :  ... - -:-==+---==-=--*: .        .*++++=+%@@@@@@@@@@@@@@@
   :@@@@%.=.. : :--.-=:..:.::.:....-  ......... --:   ::.:.  .  :::.-  ----=#+====-==-*.           :*++=++@@@@@@@@@@@@@.
     +*#-- :.:: :-::==..::.:..:...:: .:....... . ::   :. :.      -::. ..:#=-=+-==-===-=+.+       ..  -+=++%#=-+=%@@@@#
        . ...::.--::==: ::........-:..=-   :  .   .   . .:.      :-*-    .:=-+====-==--=-+#       :.   +++++==+++++*@@*
          :.::.::-.-==-.=-:...--.: :.::-.  :            .:    :+--:.     ::.==+===---=-=+--%.      +@@=. :=*+++++++*++*
          .::::::::==---=-:.. =- .  ..: :..:  .:...  :  -. .+.   -*=:.+@@@@@@@@*====---=+*:**. .    =@@**%+:-+*%*++***+=
       . ...::::::-+=--+-=:--.+:.    ..  :.-.:::::. .:  :.*.  :-:+#@@%#++=%:-@##+===-==-=+--==+ ..   .###*+++**#@%#+*+++*=
       ..::::::::.*+--:=-----:=:-....::=:--=:....:..=. :.    ..+@@@*+==---#-=@*+*====-===+:-=*@% ::    *#*+*#+*++#%%%%##*+++-
       .::.:::::::%=--:-------: .     : -:-+#+-....= ..:     -*#::%+-:=+---:+**-+==-===-=-+-=@@@@ -#    =***#%#+*+#%==*+
      :.:::::::::-+=:---=-----. .      :. ::=..:..:   .       :   -=--:..:--+#-:-+=======-%==#@@@@:.@=   :#***%%#*+=#-==
      :-::-::::.:--*:---=-=---: . ..-+*#%#=-+:...:.                :+-....-+=::::#=======-*%-+@@@%@@-%%-  .#++*%%#*+#*+-
    . =-:::=:::::-:+.:--=-=--:- .=**+-:::+++%-..:.   .               ::..--:....:=#-=====-#@+=@@@%*%@%%@%-  -*+#%:*%++*=
      =:::---:------::-:==-=--+.      ....:  :.:.                     .   ......::*=-====-*@#-%@@%#*%%%%%%@*. +**- .*#**=
     +:::. :---=--=:=:-:==-==-:@.    .....:. ..:.                       ...::...--:*=====-+@@-*@%%*##%%*###+#*= +-  ::-:**
     ::-:   .:---.#:=.:-==-==-:%%    ....  ..:  :                              :=  ==-+==-*@@=*@%#**#%#****##*++**- .:     .
    .--      .:--:=:=-.-==-==-:%@+   ....   .:                                ::   :=--===#@@**%%**#*##***++**+=+*- ::
   :.         :----=.- -=-====-%@@:   ...   .      .                         .     :---==-@@@#%%%#*#*******+++***+# :
 .             -:--: .:-+--==-:%@@@                                              . #%:-===@@@#%##*##**+++#*+*+*+****-
                ::-:  *:%==----*+%@%   .                                        . #@%--+=*@%@%%##**#**+++%#*==+*++*+=
                -=:-. #:+#+---:#%++%#.                      . .:. .:+          ..#@@@--**%%%%%###*+#++*++*--+*==+++-+.
                . =:: -==%@--=-=%**%%+                 =@+ .....:.:.:.         .*:@@%--%%@%%%####**#++*+++--:   .+*-==
                   :---+**%%---:@**%%#+     .      :@%%%::.:::::..:.:         .-::%%%-:@%%%%%###**#*+++=*+-::    :==:-=
               .    :=-+*##*#:-:**+*%**@:           =@#*:.::::::::::        .:...:@%%-+%%%%%###**+%*==+=%=:-.    ..    :.
               .     +*=+**%**-:=***##*+%%.        . .*%.:::::::::..       :. ....@%%=%%%#*#####+#%+===+:-:-.    .
                     .+-++**#+** +*-*++++%%%.    ..     --:.::.:::       =: .    .%%#+%%####*+@*++%+=-+. .:-
                      --++=**#*+*-++==+++%%%#@+..         .:::.        :=.  .    .%%%#*#*##*#+#=++#===:  .-
               .    . =-=+****+**+#:+==++#%%#%%%@%=. ..              :-:       .  %#%###%*##.:*+==#++-    :
                    .  :-=+=++***++#-:+++*++*#%%%%@@%=.. ..       :---.           #@@%@@@@=  :=  .+-+-
                .    . :.-===++**+==*+::+#++++*#%%%%%%%%-.     .*=:-:.            *%%%##*==+**#*+==*+=
                     :  -::====++*=+=+*==*=-=#**##%#%%%%%*+-:%#--:-. ..           .%#*=-==-*#*++==++-=#*:
                     :*::**=====+**==+=++*##*+++**##%%%%%%. :::.:. ..             .:=--===+@#*+++=+*+=-=+=*#=
                     #-=+==*=-++++#++==-++++*++++*#%%%%%%=-  .:.... .            .  -=--=+@#*#%@@%+==+=====+*+
                   ..*++==+**+:=*++%++++#++++++*+**#%%%%#-=. .:........              .@-=+++#%%@@%@=======++*@+
                .+-.-+*==*++#+-:=++*%+=**++++++*++**%%%%--=-.::..........            .: ==++*%@@%@+========+*#@@+
               -:--.=-*+*+++++=:.:-+*#+++*****=+*##%+#%==---::...........           :    .+%@@@%@#+======++*#%%@@#%=
              +::-:==--=*==**=#=:::-+#**+*+**++**%=.-++-:::--... ..  ....          :.     ..-@@@*++====++++*#%@@@%*=+.
              =---.=--:*+=+#*+=:-:--=++=**+++++*#+:=-.--:.:::..........           +        ..*%-+=-====+++*###@@@#+=+#*
              =----==-*+===@%:..-=---++##=+++***#-. .:=::...:..........         :=          :*:==-=====+++*%#%@@*++++##@*
             .+=-=*=+#*---==%:.:-=%+#+-:--+++*+*%:..  -::.............         :.          .--==-=======+*#*%@%+++==+##@#%+
             -:=##*+=-::-===+:.--+*#---::+*++++#+ ....-  .:.........  ..   . :+. .         =============+**#*++++===*%%#%###.
             :--*#@*+-::::-==-:-=#=.---:-+*==+#-......-:  ..........        :.            +============+*##**++====*%%%#**+=+
            .:---%=@*+-::--:-:.-*=:=:--=#++*@%-... . .-:.... ......       .:.           .=-===========+**+++===-===*#***+++=-:
            ..:-==+*#+*=:-::--.=+=::-=+*+%@+#@%.... ..-:.  .........     .-            .+============++========--===++**++==--
             .:----++%**-::  .+=+=++++++*%#+@@@%......-:.  .            =. .          .+-===-===-==++==--===------==+++====--:
              ..:--=*#%*+=   .=%##-:-+++*##+@@@@@.... -:.  .         ..-             -+==-======++*=======------==++======+*#*
               .::=-=#+#-  .::=#-:-:=++=+##*@@@@@@.. .::.  .         -:      .     .=+==-==+-==++=:=---=----========+**+=----:=
                .::--=+#=.:::-*=:::::++=+*#*%.#@@@@:..::.   .   .  .+           .=#*++++*+=====--=-=---=--=+**##*+=====-------:-
                 ..::-=*+::::=:.::::--===**+*. -@@@@:.::  ...  .  -.. .  .  .-%@@@*+*#*#*+====--=-:----*##*+==--==---======----:
                   ..:-:+:-:--:::--:::-+#*+++:   @@@@+:-  ..  .  +. ..   -@@@@@@@*@%*###*======*+-=-=%#=-=======-====-=======-:-+
                     ..:=::::::::::-:**++=-++.   .@@@@#= . .   :+    :#@@@@@@@@@%##%%%%#+++==#@%%@=**+==========-------=====-=+==
                       .  .:::::::--+==----+#++.  .@@@@@ .. ..:::+#%@%@@@@@@@#@%%%%%%@%*=+#@@@%@#%@=============------=====++++=+
                          ....  ..::=-:----+*=+**=++@@@@@:.-*@@%%%%%@@@@*:. .@@%%@%%@%**%@@@@@##@@*========--------=====+++*#*+==
                           .    ...::=:--==++=+++=+++%@@@@@@@%%@%@@#-      :%#%%%%@%#@@@@@@@%#@*@@+--===-----------======*##**=--
                                ...:.--:--=*+===++=++=#@@@@@%%%#*++=.     :%%%@@%%@@@@@@@@+@@#+*@@+===-----------====+++*##**+=-:
                                ....:+=:-==#++===+++===%@@%#*+==+++++++*##@@@%@@@@@@@@@**%##+=-%@#=-------------====+++*##*++=-:.
                                 ..:-+#===+#  .-:=+=*+*+#*+==+++++++++**%@@@@@@@@@@@*-@@#+=+==+@@=--------------===+++*##*+=-:.
                                  ..:=%+==+%       =#*-##*#+=%+++=++*+#%@@@@@@@@@@:%@#*=+=-+=#@@+-=-------------====+*#*++=-:.
                                     .=*===*      .--#:..-#@@-.   .:=**@@@@@@@@*@@@%+%+@@=--#@%=--:----------------=+++==-:.
                                       =::--         :*-##==-.        -@@@@@@@@@@@@@@@@@@@@@%+=::::::::::::::::::--====-:..
                                           ...        *%=-.....       %@@@@@@@@@@@@@@@@@@@@@*-::..:.............:::--:..      .-:
                                                  ::  ==.   .....    +@%@@@@@@@@@@@@@@@@@@@@*.:. . ...          .... .     =@*-:
                                                      ::..:---::... :#*#@@@@@@@@@%%@@@@@@@@@@+ .                  :*    ##+%+:
                                                             ...::::*-:::@@@@@@%##%%%%@@@@@@@#                   -+. *+ =  -:
                                                                   ..  .#@@%%%%##*+*#%@@@%%%=                    . :     ::
                                                                        @@@%%%######%%%%#####%=                =        #
                                                                          @@@@@%@@%%%###*##*-                 . .     =
                                                                          :@@%%%%###******+=-                 .
                                                                            *@###***+**+++:
                                                                               -*- =*++*:
*/

