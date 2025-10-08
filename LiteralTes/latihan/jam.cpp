#include <iostream>
using namespace std;

int main() {
    int second = 3781;          // Langkah 1: variabel detik
    int jam = second / 3600;    // Langkah 2: hitung berapa jam (pembagian bulat)
    int sisa = second % 3600;   // Langkah 3: ambil sisa detik (pakai modulus)
    int menit = sisa / 60;      // Langkah 4: hitung berapa menit
    int detik = sisa % 60;      // Langkah 5: sisa terakhir jadi detik

    cout << second << " detik = "
         << jam << " jam, "
         << menit << " menit, "
         << detik << " detik." << endl;

    return 0;
}
    