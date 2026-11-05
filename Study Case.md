# STUDI KASUS

STUDI KASUS MINI PROJECT

Nama Proyek   : Kuis/Latihan Soal Pilihan Ganda (Mini Quiz) 

Mata Kuliah   : Praktikum Pemrograman / Pemrograman Dasar (C++)
Kelompok      : Empat (4)
Kelas	        : ILKOM A

Ketua	        : Nino Amadino (2617051027)

Anggota       :
1. Ratu Fiona Tsaqifah (2617051028)
2. Vadinda Sabrina Salwa (2617051036)
3. Adzkia Putri Ramadhani (2617051014)
4. Muhammad Aminnawloh (2617051044)
5. Muhammad Arief (2617051022)


Rani adalah seorang pengembang aplikasi pembelajaran untuk siswa SMK. Ia ingin membuat fitur koreksi otomatis untuk kuis Informatika yang berisi 5 soal pilihan ganda (opsi A sampai E).

Kunci jawaban kuis secara berurutan adalah: B C B C D

Buatlah program yang membaca 5 jawaban siswa, lalu memeriksa setiap jawaban terhadap kunci jawaban. Program kemudian mencetak hasil tiap soal, jumlah jawaban benar, nilai akhir, dan predikat.

Nilai dihitung dengan rumus:

nilai = jumlah_benar * 100 / 5

Predikat ditentukan sebagai berikut:

Nilai >= 80: Sangat Baik
Nilai >= 60: Baik
Nilai < 60: Perlu Belajar Lagi
Format Masukan

Lima baris, masing-masing berisi satu huruf (A sampai E) yang merupakan jawaban siswa untuk soal ke-1 sampai ke-5. Huruf kapital dan huruf kecil dianggap sama.

Batasan
Jumlah soal tepat 5.
Setiap jawaban adalah satu huruf antara A sampai E (huruf besar atau kecil).
Format Keluaran
Cetak 5 baris hasil koreksi, satu per soal:

Jika benar: Soal <nomor>: BENAR
Jika salah: Soal <nomor>: SALAH (Kunci: <huruf>)

Kemudian cetak 3 baris berikut:

Benar : <jumlah benar> dari 5
Nilai : <nilai>
Predikat: <predikat>
Contoh Masukan 0
Benar : 5 dari 5
Nilai : 100
Predikat: Sangat Baik
Contoh Masukan 1
B
A
B
c
A
