#include "mahasiswa.h"

int main() {
    int pilihan;
    string nama;
    int pertemuan;

    while (true) {
        cout << "\nMenu:" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tambah Kehadiran" << endl;
        cout << "3. Tampilkan Data" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama mahasiswa: ";
                cin.ignore();  // Membersihkan buffer sebelum mengambil input string dengan spasi
                getline(cin, nama);
                tambahMahasiswa(nama);
                break;
            case 2:
                cout << "Masukkan nama mahasiswa: ";
                cin.ignore();  // Membersihkan buffer sebelum mengambil input string dengan spasi
                getline(cin, nama);
                cout << "Masukkan nomor pertemuan: ";
                cin >> pertemuan;
                tambahKehadiran(nama, pertemuan);
                break;
            case 3:
                tampilkanData();
                break;
            case 4:
                exit(0);
            default:
                cout << "Pilihan tidak valid" << endl;
        }
    }

    return 0;
}
