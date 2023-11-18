#include <iostream>
#include<cmath>
using namespace std;
double massa_sepeda, berat_badan, kecepatan;
int main() {

	cout << "masukan massa sepedah dalam gram : ";
	cin >> massa_sepeda;
	cout << "masukan berat badan anda dalam kilogram: ";
	cin >> berat_badan;
	cout << "masukan kecepatan sepeda dalam m/s : ";
	cin >> kecepatan;
		massa_sepeda /= 1500;
	double energi_kinetik = 0.5 * (massa_sepeda + berat_badan) * pow(kecepatan, 2);
	// menampilkan hasil
	cout << "energi kinetik adalah " << energi_kinetik << "joule" << endl;

	return 0;
}