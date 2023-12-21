#include <iostream>
#include <iomanip>
#include <cstdlib> // for system("cls")
#include <conio.h>

using namespace std;

struct Data {
    char no_rekam_medis[20], nama_pasien[20], tanggal_lahir[20], usia[20], jenis_kelamin[20], no_telepon[20], berat_badan[20], tinggi_badan[20], keluhan_utama[20], tanggal_masuk[20], alamat[20];
};

Data pasien[100];
int jumlahData = 0;

void inputData() {
    cout << "Jumlah Data Pasien yang Akan Diinput: ";
    int tambahanData;
    cin >> tambahanData;

    for (int i = 0; i < tambahanData; ++i) {
        system("cls");
        cout << "Data Ke-" << jumlahData + 1 << endl;
        cout << "No Rekam Medis   : ";
        cin >> pasien[jumlahData].no_rekam_medis;
        cout << "Nama Pasien      : ";
        cin >> pasien[jumlahData].nama_pasien;
        cout << "Tanggal Lahir    : ";
        cin >> pasien[jumlahData].tanggal_lahir;
        cout << "Usia             : ";
        cin >> pasien[jumlahData].usia;
        cout << "Jenis Kelamin    : ";
        cin >> pasien[jumlahData].jenis_kelamin;
        cout << "No Telepon       : ";
        cin >> pasien[jumlahData].no_telepon;
        cout << "Berat Badan      : ";
        cin >> pasien[jumlahData].berat_badan;
        cout << "Tinggi Badan     : ";
        cin >> pasien[jumlahData].tinggi_badan;
        cout << "Keluhan Utama    : ";
        cin >> pasien[jumlahData].keluhan_utama;
        cout << "Tanggal Masuk    : ";
        cin >> pasien[jumlahData].tanggal_masuk;
        cout << "Alamat           : ";
        cin >> pasien[jumlahData].alamat;

        ++jumlahData;
    }
}
