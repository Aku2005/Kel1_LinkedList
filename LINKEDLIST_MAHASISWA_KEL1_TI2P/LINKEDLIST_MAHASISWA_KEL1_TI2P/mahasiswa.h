#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    int kehadiran[14];
};

struct Node {
    Mahasiswa data;
    Node* next;
};

extern Node* head;  // Deklarasikan head sebagai eksternal

void tambahMahasiswa(string nama);
void tambahKehadiran(string nama, int pertemuan);
void tampilkanData();

#endif
