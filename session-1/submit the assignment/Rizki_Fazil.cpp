#include<iostream>
#include<cmath>
using namespace std;

int main( ) {
    double diameter, keliling, jarak_km, jarak_cm, jumlah_putaran;
    double pi = 3.14;

    cout << "Masukkan (dalam cm): ";
    cin >> diameter;

    cout << "Masukkan jarak tempuh (dalam km): ";
    cin >> jarak_km;

    keliling = pi * diameter;
    jarak_cm = jarak_km * 100000;

    jumlah_putaran = jarak_cm / keliling;

    cout << "jumlah putaran ban: " << jumlah_putaran << endl;

    double jumlah_putaran_bulat = ceil(jumlah_putaran);
    
    cout << "total putaran ban; " << jumlah_putaran << " kali" << endl;

    return 0;
}