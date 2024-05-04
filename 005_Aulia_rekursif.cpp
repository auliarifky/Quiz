#include <iostream>
using namespace std;

int EuclideanGCD(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return EuclideanGCD(n, m % n);
    }
}

int main() {
    int m, n;
    cout << "Masukkan bilangan 1: ";
    cin >> m;
    cout << "Masukkan bilangan 2: ";
    cin >> n;

    // Memanggil fungsi EuclideanGCD dan menampilkan hasilnya
    int gcd = EuclideanGCD(m, n);
    cout << "FPB dari " << m << " dan " << n << " adalah: " << gcd << endl;
    
    return 0;
}
