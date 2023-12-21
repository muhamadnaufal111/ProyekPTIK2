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

void tampilkanData() {
    system("cls");
    cout << "\n========================================================================= Menampilkan Data Pasien =================================================================================\n\n";
    cout << left << setw(5) << "No" << setw(18) << "No Rekam Medis" << setw(20) << "Nama Pasien" << setw(20) << "Tanggal Lahir"
         << setw(8) << "Usia" << setw(15) << "Jenis Kelamin" << setw(15) << "No Telepon" << setw(15) << "Berat Badan"
         << setw(15) << "Tinggi Badan" << setw(20) << "Keluhan Utama" << setw(15) << "Tanggal Masuk" << setw(20) << "Alamat" << endl;

    for (int i = 0; i < jumlahData; ++i) {
        cout << left << setw(5) << i + 1 << setw(18) << pasien[i].no_rekam_medis << setw(20) << pasien[i].nama_pasien
             << setw(20) << pasien[i].tanggal_lahir << setw(8) << pasien[i].usia << setw(15) << pasien[i].jenis_kelamin
             << setw(15) << pasien[i].no_telepon << setw(15) << pasien[i].berat_badan << setw(15) << pasien[i].tinggi_badan
             << setw(20) << pasien[i].keluhan_utama << setw(15) << pasien[i].tanggal_masuk << setw(20) << pasien[i].alamat << endl;
    }

    cout << "\n===================================================================================================================================================================================\n";
    getch(); // Menunggu sampai tombol ditekan
    system("cls");
}

void hapusData() {
    int nomorHapus;
    cout << "Hapus data ke-";
    cin >> nomorHapus;

    if (nomorHapus >= 1 && nomorHapus <= jumlahData) {
        --nomorHapus;

        for (int i = nomorHapus; i < jumlahData - 1; ++i) {
            pasien[i] = pasien[i + 1];
        }

        --jumlahData;
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n++++++++++++++++++++++++++++++ Data ke-" << nomorHapus + 1 << " Terhapus ++++++++++++++++++++++++++++++";
        getch();
        system("cls");
    } else {
        system("cls");
        cout << "Nomor data tidak valid.";
        getch();
        system("cls");
    }
}