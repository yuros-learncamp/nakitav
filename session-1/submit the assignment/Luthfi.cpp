#include <iostream>

using namespace std;

int main() {
    // VARIABEL SESUAI SOAL
    double jarak_km = 30.0;            // Jarak sesuai soal
    double diameter_ban_cm = 54.0;     // Perkiraan rata-rata diameter ban motor (ring 14-17)
    const double pi = 3.14159;
    
    // PROSES PERHITUNGAN
    double keliling_ban_cm = pi * diameter_ban_cm;
    double jarak_cm = jarak_km * 100000; // Ubah 30km ke cm
    
    // Menghitung total putaran
    // Rumus: Jarak Total / Keliling Ban
    double total_putaran = jarak_cm / keliling_ban_cm;

    // OUTPUT
    cout << "=== HASIL PERHITUNGAN PERJALANAN ===" << endl;
    cout << "Jarak Tempuh  : " << jarak_km << " KM" << endl;
    cout << "Diameter Ban  : " << diameter_ban_cm << " CM (Rata-rata)" << endl;
    cout << "Keliling Ban  : " << keliling_ban_cm << " CM" << endl;
    cout << "------------------------------------" << endl;
    cout << "Total putaran roda yang dibutuhkan: " << (long long)total_putaran << " kali putaran." << endl;

    return 0;
}