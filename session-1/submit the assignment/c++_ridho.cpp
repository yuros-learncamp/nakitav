#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    double diameter,jarak_km,keliling,jarak_cm,hasil_putaran;
    double pi=3.14; 

    cout << "masukkin diameter bannya (cm): ";
    cin >> diameter;

    cout << "masukkin jarak tenpuhnya (km):";
    cin >> jarak_km;

    keliling = pi * diameter;

    jarak_cm = jarak_km * 100000;

    hasil_putaran = jarak_cm / keliling;

    cout << "hasil putaran asli: " << hasil_putaran << endl;

    double total_akhir = ceil(hasil_putaran);

    cout << "jadi, roda berputar sebanyak; " << total_akhir << " kali." << endl;

    return 0;

}