#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <string> v(n);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (v[i][0] == '+' || v[i][2] == '+') ans++;
        if (v[i][0] == '-' || v[i][2] == '-') ans--;

    }

    cout << ans << endl;

}