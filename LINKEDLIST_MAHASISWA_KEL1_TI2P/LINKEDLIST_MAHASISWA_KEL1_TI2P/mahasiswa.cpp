#include "mahasiswa.h"

Node* head = NULL;  // Definisikan head

void tambahMahasiswa(string nama) {
    Node* baru = new Node;
    baru->data.nama = nama;
    for (int i = 0; i < 14; i++) {
        baru->data.kehadiran[i] = 0;
    }

    baru->next = head;
    head = baru;
}

void tambahKehadiran(string nama, int pertemuan) {
    if (pertemuan < 1 || pertemuan > 14) {
        cout << "Pertemuan tidak valid (harus 1-14)" << endl;
        return;
    }

    Node* curr = head;
    while (curr != NULL && curr->data.nama != nama) {
        curr = curr->next;
    }

    if (curr == NULL) {
        cout << "Mahasiswa tidak ditemukan" << endl;
        return;
    }

    curr->data.kehadiran[pertemuan - 1]++;
}

void tampilkanData() {
    Node* curr = head;
    while (curr != NULL) {
        cout << "Nama: " << curr->data.nama << endl;
        for (int i = 0; i < 14; i++) {
            cout << "Pertemuan " << i + 1 << ": " << curr->data.kehadiran[i] << endl;
        }
        cout << endl;
        curr = curr->next;
    }
}
