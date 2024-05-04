#include <iostream>
using namespace std;

// Deklarasi fungsi EuclideanGCD di luar fungsi main
int EuclideanGCD(int m, int n) {
    int r;
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int main() {
    int m, n;
    do {
        cout << "Masukkan bilangan 1: ";
        cin >> m;
        cout << "Masukkan bilangan 2: ";
        cin >> n;
    } while (m <= 0 || n <= 0); // Memastikan kedua bilangan positif

    // Memanggil fungsi EuclideanGCD dan menampilkan hasilnya
    int gcd = EuclideanGCD(m, n);
    cout << "FPB dari " << m << " dan " << n << " adalah: " << gcd << endl;
    
    return 0;
}
