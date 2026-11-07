#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout << "=== Program Menampilkan Hari ===" << endl;
    cout << "Masukkan angka (1-7): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "1 = MONDAY (Senin)" << endl;
            break;
        case 2:
            cout << "2 = TUESDAY (Selasa)" << endl;
            break;
        case 3:
            cout << "3 = WEDNESDAY (Rabu)" << endl;
            break;
        case 4:
            cout << "4 = THURSDAY (Kamis)" << endl;
            break;
        case 5:
            cout << "5 = FRIDAY (Jumat)" << endl;
            break;
        case 6:
            cout << "6 = SATURDAY (Sabtu)" << endl;
            break;
        case 7:
            cout << "7 = SUNDAY (Minggu)" << endl;
            break;
        default:
            cout << "Pilihan tidak valid! Masukkan angka antara 1 sampai 7." << endl;
            break;
    }

    return 0;
}
