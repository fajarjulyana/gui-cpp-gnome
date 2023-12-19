# contoh aplikasi GUI GNOME sederhana menggunakan C++ dan GTK

Proyek ini adalah contoh aplikasi GUI GNOME sederhana menggunakan C++ dan GTK.

## Deskripsi

Aplikasi ini dibuat dengan menggunakan toolkit GTK untuk membuat antarmuka pengguna grafis (GUI) sederhana pada lingkungan GNOME. Aplikasi ini mencakup pembuatan jendela, penambahan tombol, serta menangani sinyal-sinyal untuk memberikan respons terhadap interaksi pengguna.

## Persyaratan

Pastikan Anda memiliki library pengembangan GTK terinstal pada sistem Anda sebelum mencoba mengompilasi dan menjalankan proyek ini.

```bash
sudo apt-get install libgtk-3-dev
```

## Kompilasi dan Eksekusi

Gunakan perintah berikut untuk mengompilasi program:

```bash
g++ -o gnomec++ main.cpp $(pkg-config --cflags --libs gtk+-3.0)
```

Gantilah `nama_program_anda` dengan nama yang diinginkan untuk program eksekutif Anda dan `kode_sumber_anda.cpp` dengan nama file sumber Anda.

Setelah dikompilasi, jalankan program dengan:

```bash
./gnomecpp
```

## Kontribusi

Kontribusi selalu dipersilakan! Jika Anda ingin berkontribusi pada proyek ini, harap buat _fork_ dari repositori ini dan kirim _pull request_.

## Lisensi

Proyek ini dilisensikan di bawah [lisensi MIT](LICENSE).

