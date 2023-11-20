#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int n_motor, n_mobil, jam_masuk, jam_keluar, durasi, biaya_motor, biaya_mobil, total;
    // Masukkan jumlah motor
    cout << "Masukkan jumlah motor: ";
    cin >> n_motor;
    // Masukkan jumlah mobil
    cout << "Masukkan jumlah mobil: ";
    cin >> n_mobil;
    // Masukkan jam masuk
    cout << "Input jam masuk (format 24 jam): ";
    cin >> jam_masuk;
    // Masukkan jam keluar
    cout << "Input jam keluar (format 24 jam): ";
    cin >> jam_keluar;
    // Hitung durasi parkir
    if (jam_keluar >= jam_masuk) {
        durasi = jam_keluar - jam_masuk;
    }
    else {
        durasi = 24 - jam_masuk + jam_keluar;
    }
    // Hitung biaya parkir per jam
    biaya_motor = 2000;
    biaya_mobil = 5000;
    // Hitung total pendapatan
    total = (n_motor * biaya_motor + n_mobil * biaya_mobil) * durasi;
    // Cetak total pendapatan
    cout << "Total biaya parkir: Rp " << total << " (" << durasi << " jam)" << endl;
    return 0;
}