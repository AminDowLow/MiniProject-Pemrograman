#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
const int JUMLAH_SOAL = 5;
const int JUMLAH_OPSI = 5;
 
// ARRAY: soal, opsi, dan kunci jawaban
string soal[JUMLAH_SOAL] = {
    "Siapa pencipta bahasa pemrograman C++?",
    "Jaringan komputer dengan cakupan area sempit seperti gedung atau sekolah adalah...",
    "Struktur pemrograman untuk menjalankan perintah secara berulang kali dinamakan...",
    "Fitur pengamanan tambahan untuk verifikasi dua langkah pada akun digital adalah...",
    "Komponen perangkat keras yang berfungsi sebagai \"otak\" komputer adalah..."
};
 
string opsi[JUMLAH_SOAL][JUMLAH_OPSI] = {
    {"James Gosling", "Bjarne Stroustrup", "Guido van Rossum", "Dennis Ritchie", "Nino Amadino"},
    {"WAN", "MAN", "LAN", "Internet", "Bluetooth"},
    {"Percabangan", "Perulangan (Looping)", "Sekuensial", "Variabel", "Fungsi"},
    {"Phishing", "Encryption", "Two-Factor Authentication (2FA)", "Firewall", "Malware"},
    {"RAM", "Hard Disk", "Motherboard", "CPU", "Power Supply"}
};

char kunci[JUMLAH_SOAL] = {'B', 'C', 'B', 'C', 'D'};
 
// FUNCTION: tampilkan satu soal (PERULANGAN untuk opsi)
void tampilkanSoal(int n) {
    cout << "\n" << (n + 1) << ". " << soal[n] << endl;
    for (int i = 0; i < JUMLAH_OPSI; i++) {
        cout << "   " << char('A' + i) << ". " << opsi[n][i] << endl;
    }
}
// FUNCTION: baca jawaban valid A-E (PERULANGAN validasi)
char bacaJawaban() {
    char j;
    while (true) {
        cout << "Jawaban kamu (A-E): ";
        cin >> j;
        j = toupper(j);
        if (j >= 'A' && j <= 'E') return j;
        cout << "Input tidak valid!\n";
    }
}

// FUNCTION: cek jawaban (PERCABANGAN)
bool cekJawaban(int n, char jawab) {
    if (jawab == kunci[n]) {
        cout << ">>> BENAR! <<<" << endl;
        return true;
    } else {
        cout << ">>> SALAH! Kunci: " << kunci[n] << " <<<" << endl;
        return false;
    }
}
