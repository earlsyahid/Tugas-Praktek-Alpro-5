#include <iostream>
using namespace std;

int gajiJam = 7500;

float pokok(int jamKerja) {
    if (jamKerja > 8) {
        return 8 * gajiJam;
    } else {
        return jamKerja * gajiJam;
    }
}

float lembur(int jamKerja) {
    if (jamKerja > 8) {
        return (jamKerja - 8) * (gajiJam * 1.5);
    } else {
        return 0;
    }
}

int makan(int jamKerja) {
    if (jamKerja > 9) {
        return 10000;
    } else {
        return 0;
    }
}

int transport(int jamKerja) {
    if (jamKerja > 10) {
        return 13000;
    } else {
        return 0;
    }
}

int main() {
    string NIP, Nama;
    int jamKerja;

    cout << "-Gaji Karyawan-" << endl;
    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin >> Nama;
    cout << "Masukkan Jumlah Jam Kerja: ";
    cin >> jamKerja;

    float gajiPokok = pokok(jamKerja);
    float gajiLembur = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangTransport = transport(jamKerja);

    cout << endl << "-Gaji Karyawan-" << endl;
    cout << "NIP: " << NIP << endl;
    cout << "Nama: " << Nama << endl;
    cout << "Gaji Pokok: " << gajiPokok << endl;
    cout << "Lembur: " << gajiLembur << endl;
    cout << "Uang Makan: " << uangMakan << endl;
    cout << "Transport: " << uangTransport << endl;

    return 0;
}
