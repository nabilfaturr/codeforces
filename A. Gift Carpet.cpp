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
    int n, m; 
    cin >> n >> m;
    vector <str> v(n);

    if (m <= 3 && n <= 3) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < n; i++){
        cin >> v[i];
        if (v[i] == "vika") {
            cout << "YES\n";
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - (n % 4); j++) {
            if (v[j][i] == 'v') {
                if (v[j+1][i] == 'i') {
                    if (v[j+2][i] == 'k') {
                        if (v[j+3][i] == 'a') {
                            cout << "YES\n";
                            return;
                        }
                    }

                }
            }
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);  

    int t = 1; cin >> t;
    while(t--) {solve();}
}

/*
00 10 20 30 40 50


v
i
k
a

if (n % 4 == 1)

*/