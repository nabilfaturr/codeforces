#include <bits/stdc++.h>
using namespace std;

using str   = string;
using ll    = long long;
using pii   = pair <int,int>;
using pll   = pair <ll,ll>;
using vi    = vector <int>;
using vll   = vector <ll>;
using vpii  = vector <pii>;
using vpll  = vector <pll>;

#define mp make_pair
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front
#define fi first
#define se second
#define fs first.second
#define ss second.second
#define ff first.first
#define sf second.first

void solve(){
    int a,b,c,d;

    cin >> a >> b >> c >> d;   

    int mishaLeft = 3 * a / 10;
    int mishaRight = a - (a/250 * c);

    int vasyaLeft = 3 * b / 10;
    int vasyaRight = b - (b/250 * d);

    int mishaMax = max(mishaLeft, mishaRight);
    int vasyaMax = max(vasyaLeft, vasyaRight);

    if (mishaMax > vasyaMax) cout << "Misha\n";
    else if (vasyaMax > mishaMax) cout << "Vasya\n";
    else cout << "Tie\n";

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);  

    // int t = 1; cin >> t;
    // while(t--) {solve();}
    solve();
}