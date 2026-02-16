#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	const double PI = 3.141592653589793;

	double diameter_ban_cm;
	double jarak_keseluruhan;

	//input data ban
	cout << "Masukan Diameter Ban (cm) : ";
	cin >> diameter_ban_cm ;

	cout << "Jarak Keseluruhan (km) : ";
	cin >> jarak_keseluruhan;

	// hitungan keliling
	double keliling_ban_cm = PI * diameter_ban_cm;

	// konver km ke cm
	double jarak_keseluruhan_cm = jarak_keseluruhan * 100000;

	//hitungan akhir
	double total_putaran = jarak_keseluruhan_cm / keliling_ban_cm;

	//total 
	cout << "Total putaran ban:  " << total_putaran << endl;
		return 0;
}






