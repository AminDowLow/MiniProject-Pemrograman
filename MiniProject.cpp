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
