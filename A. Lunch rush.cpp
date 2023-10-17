#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    int joy = INT_MIN;
    cin >> n >> k;


    for (int i = 0; i < n; i++) {
        int fi, ti;
        cin >> fi >> ti;

        if (ti > k) {
            fi = fi - (ti - k);
        }

        joy = max(joy, fi);

    }

    cout << joy << endl;

}


/*

setelah menulis kontes pemrograman lainnya, tiga rabbits memutuskan untuk makan siang.
pelatih memberikan team k time units untuk istirahat makan siang

the rabbits punya list n restoran yang ingin dikunjungin. restoran ke i ditandai oleh dua int, fi dan ti.
nilai dari ti menunjukkan waktu yang dimiliki rabbit untuk makan siang .
jika waktu ti melebihi waktu k yang telah diberikan, maka kegembiraan rabbits di restoran ini akan sama dengan fi - (ti -k). kebalikannya, rabbits akan mendapatkan fi units joy

tugas kamu ialah untuk mencari maximum joy yang the rabbit dapat dari makan siang. tergantung dari restoran nya. the rabbits hanya boleh milih satu restoran

test case 1

n = 2, k = 5

n = 1,
fi = 3, ti = 3
joy = 3

n = 2,
fi = 4, ti = 5
joy = 5

test case 2
n = 4, k = 6

n = 1
fi = 5, ti = 8
joy = 5 - (2) = 3

n = 2
fi = 3, ti = 6
joy = 3

n = 3
fi = 3, ti = 6
joy = 3



*/