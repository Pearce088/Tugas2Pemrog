#include <iostream>
using namespace std;

#define phi 3.14

// Persegi
double hitungLuasPersegi(double sisi) { // Luas
    return sisi * sisi;
}

double hitungKelilingPersegi(double sisi) { // Keliling
    return sisi + sisi + sisi + sisi;
}

// Persegi Panjang
double hitungLuasPersegiPanjang(double lebar, double panjang) { // Luas
    return lebar * panjang;
}

double hitungKelilingPersegiPanjang(double lebar, double panjang) { // Keliling
    return 2 * (lebar + panjang);
}

// Segitiga siku-siku
double hitungLuasSegitigaSikuSiku(double alas, double tinggi) { // luas
    return 0.5 * alas * tinggi;
}

double hitungKelilingSegitigaSikuSiku(double alas, double tinggi) { // keliling
    double sisiMiring = sqrt((alas * alas) + (tinggi * tinggi)); // Menggunakan teorema Pythagoras
    return alas + tinggi + sisiMiring;
}

// Lingkaran
double hitungLuasLingkaran(double jari) { // luas
    return 2 * phi * jari;
}

double hitungKelilingLingkaran(double jari) { // keliling
    return phi * jari * jari;
}

int main()
{
    int option;
    do {
        cout << "\n\n======== KALKULATOR BANGUN DATAR ========" << endl;
        cout << "1. Luas Persegi" << endl;
        cout << "2. Keliling Persegi" << endl;
        cout << "3. Luas Persegi Panjang" << endl;
        cout << "4. Keliling Persegi Panjang" << endl;
        cout << "5. Luas Segitiga Siku-Siku" << endl;
        cout << "6. Keliling Segitiga Siku-Siku" << endl;
        cout << "7. Luas Lingkaran" << endl;
        cout << "8. Keliling Lingkaran" << endl;
        cout << "9. Keluar" << endl;
        cout << ">> Masukkan Opsi yang ingin dihitung (1-9): ";
        cin >> option;

        switch (option) {
        case 1: {
            double sisi;
            cout << "\n========== LUAS PERSEGI ============" << endl;
            cout << "Masukkan sisi: ";
            cin >> sisi;
            cout << ">> Hasil: " << hitungLuasPersegi(sisi) << endl;
            cout << "====================================" << endl;
            break;
        }

        case 2: {
            double sisi;
            cout << "\n========== KELILING PERSEGI ========" << endl;
            cout << "Masukkan sisi: ";
            cin >> sisi;
            cout << ">> Hasil: " << hitungKelilingPersegi(sisi) << endl;
            cout << "====================================" << endl;
            break;
        }

        case 3: {
            double panjang, lebar;
            cout << "\n====== LUAS PERSEGI PANJANG ======" << endl;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            cout << ">> Hasil: " << hitungLuasPersegiPanjang(panjang, lebar) << endl;
            cout << "====================================" << endl;
            break;
        }

        case 4: {
            double panjang, lebar;
            cout << "\n====== KELILING PERSEGI PANJANG ======" << endl;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            cout << ">> Hasil: " << hitungKelilingPersegiPanjang(panjang, lebar) << endl;
            cout << "======================================" << endl;
            break;
        }

        case 5: {
            double alas, tinggi;
            cout << "\n====== LUAS SEGITIGA SIKU-SIKU ======" << endl;
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << ">> Hasil: " << hitungLuasSegitigaSikuSiku(alas, tinggi) << endl;
            cout << "=====================================" << endl;
            break;
        }

        case 6: {
            double alas, tinggi;
            cout << "\n==== KELILING SEGITIGA SIKU-SIKU ====" << endl;
            cout << "Masukkan alas: ";
            cin >> alas;
            cout << "Masukkan tinggi: ";
            cin >> tinggi;
            cout << ">> Hasil: " << hitungKelilingSegitigaSikuSiku(alas, tinggi) << endl;
            cout << "=====================================" << endl;
            break;
        }

        case 7: {
            double jari;
            cout << "\n========== LUAS LINGKARAN ===========" << endl;
            cout << "Masukkan Jari-jari: ";
            cin >> jari;
            cout << ">> Hasil: " << hitungLuasLingkaran(jari) << endl;
            cout << "=====================================" << endl;
            break;
        }

        case 8: {
            double jari;
            cout << "\n======== KELILING LINGKARAN ========" << endl;
            cout << "Masukkan alas: ";
            cin >> jari;
            cout << ">> Hasil: " << hitungKelilingLingkaran(jari) << endl;
            cout << "====================================" << endl;
            break;
        }

        default: {
            cout << "[ERROR] Opsi tidak valid." << endl;
        }
        }
    } while (option != 9);

    return 0;
}