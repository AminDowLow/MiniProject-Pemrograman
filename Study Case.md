=== Study Case ===

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
