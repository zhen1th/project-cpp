#include <iostream>
#include <windows.h> // library untuk menggunakan sleep
using namespace std;
void loading();
double faktorial(double x);
int menu;
char masukan, ulang, kembali;
int soal;
int main()
{
    do
    {
        cout << "+======================================================================+" << endl;
        cout << "+                          PROGRAM PERMUTASI                           +" << endl;
        cout << "+======================================================================+" << endl;
        cout << "Menu : " << endl;
        cout << "1. Permutasi Faktorial " << endl;
        cout << "2. Permutasi Terdiri Dari R Unsur Dan N Elemen" << endl;
        cout << "3. Permutasi Yang Mengandung k1,k2..,kt Unsur Yang Sama " << endl;
        cout << "4. Permutasi Siklis " << endl;
        cout << "5. Permutasi Berulang Dari N Unsur Tipe Permutasi Terdiri Dari K Unsur" << endl;
        cout << "0. Keluar" << endl;
        cout << "Masukkan Pilihan Menu (1-5) : ";
        cin >> menu;
        switch (menu)
        {
        case 0:
            cout << "TERIMAKASIH SUDAH MENGGUNAKAN PROGRAM" << endl;
            cout << "+===================================+" << endl;
            exit(0);
            break;
        case 1:
            cout << "+=======================+" << endl;
            cout << "+  PERMUTASI FAKTORIAL  +" << endl;
            cout << "+=======================+" << endl;
            double nilai;
            int soal1;
            cout << "Soal :" << endl;
            cout << "1. Untuk menyambut sebuah pertemuan delegasi negara yang dihadiri oleh ... negara, panitia akan memasang ke ... bendera dari lima negara yang hadir. Banyak cara panitia menyusundera tersebut adalah …" << endl;
            cout << "2. Ada ... orang siswa, yang akan duduk di bangku yang berurutan.Berapa banyak susunan duduk yang dapat dibentuk?" << endl;
            cout << "3. Jika terdapat ... orang yang menempati ... kursi, maka banyaknya cara duduk yang berbeda adalah" << endl;
            cout << "Pilih Soal (1-3) :";
            cin >> soal1;
            switch (soal1)
            {
            case 1:
                cout << endl;
                cout << "1. Untuk menyambut sebuah pertemuan delegasi negara yang dihadiri oleh ... negara, panitia akan memasang ke ... bendera dari lima negara yang hadir. Banyak cara panitia menyusundera tersebut adalah …" << endl;
                do
                {   
                    cout<<endl;
                    cout << "Masukkan Nilai :";
                    cin >> nilai;
                    if (nilai > 0 && nilai <= 709)
                    {
                        cout << "1. Untuk menyambut sebuah pertemuan delegasi negara yang dihadiri oleh " << nilai << " negara, panitia akan memasang kelima bendera dari " << nilai << " negara yang hadir. Banyak cara panitia menyusun " << nilai << " bendera tersebut adalah …" << endl;
                        cout << endl;
                        cout << "Mencari Faktorial Dari " << nilai << "!" << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut " << endl;
                            cout << "n = Jumlah Benda" << endl;
                            cout << "P = Permutasi" << endl;
                            cout << "n! = Jumlah Benda Faktorial" << endl;
                            cout << "Dalam Soal Ini, n = " << nilai << ", Sehingga nPn = " << nilai << "!." << endl;
                            faktorial(nilai);
                            double n = nilai; // Angka yang ingin dihitung faktorialnya
                            double hasil = 1;

                            cout << n << "! = "; // Menampilkan awal output "4! ="

                            // Menghitung faktorial dan menampilkan urutan perkalian
                            for (int i = n; i >= 1; i--)
                            {
                                hasil *= i;
                                cout << i; // Menampilkan angka
                                if (i > 1)
                                {
                                    cout << " x "; // Menambahkan "×" antara angka
                                }
                            }
                            cout << endl;
                            cout << "Jadi Banyak cara panitia menyusun ke " << nilai << "bendera tersebut adalah " << faktorial(nilai) << endl;
                        }
                    }
                    else
                    {
                        cout << "Nilai Yang Diinput Tidak Dapat Diproses " << endl;
                        cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                        cin >> kembali;
                        cout << endl;
                    }
                } while (kembali == 'y');
                break;
            case 2:
                cout << "2. Ada ... orang siswa, yang akan duduk di bangku yang berurutan.Berapa banyak susunan duduk yang dapat dibentuk?" << endl;
                do
                {
                    cout << endl;
                    cout << "Masukkan Nilai :";
                    cin >> nilai;
                    if (nilai < 0 && nilai >= 709)
                    {
                        cout << "2. Ada " << nilai << " orang siswa"
                                                      ", yang akan duduk di bangku yang berurutan.Berapa banyak susunan duduk yang dapat dibentuk?"
                             << endl;
                        cout << endl;
                        cout << "Mencari Faktorial Dari " << nilai << "!" << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut " << endl;
                            cout << "n = Jumlah Benda" << endl;
                            cout << "P = Permutasi" << endl;
                            cout << "n! = Jumlah Benda Faktorial" << endl;
                            cout << "Dalam Soal Ini, n = " << nilai << ", Sehingga nPn = " << nilai << "!." << endl;
                            faktorial(nilai);
                            double n = nilai; // Angka yang ingin dihitung faktorialnya
                            double hasil = 1;

                            cout << n << "! = "; // Menampilkan awal output "4! ="

                            // Menghitung faktorial dan menampilkan urutan perkalian
                            for (int i = n; i >= 1; i--)
                            {
                                hasil *= i;
                                cout << i; // Menampilkan angka
                                if (i > 1)
                                {
                                    cout << " x "; // Menambahkan "×" antara angka
                                }
                            }
                            cout << endl;
                            cout << "Jadi Berapa banyak susunan duduk yang dapat dibentuk adalah " << nilai << " = " << faktorial(nilai) << endl;
                        }
                    }
                    else
                    {
                        cout << "Nilai Yang Diinput Tidak Dapat Diproses " << endl;
                        cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                        cin >> kembali;
                        cout << endl;
                    }
                } while (kembali == 'y');

                break;
            case 3:
                cout << endl;
                cout << "3. Jika terdapat ... orang yang menempati ... kursi, maka banyaknya cara duduk yang berbeda adalah" << endl;
                do
                {
                    cout<<endl;
                    cout << "Masukkan Nilai :";
                    cin >> nilai;
                    if (nilai < 0 && nilai >= 709)
                    {
                        cout << "3. Jika terdapat " << nilai << " orang yang menempati " << nilai << " kursi, maka banyaknya cara duduk yang berbeda adalah" << endl;
                        cout << endl;
                        cout << "Mencari Faktorial Dari " << nilai << "!" << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut " << endl;
                            cout << "n = Jumlah Benda" << endl;
                            cout << "P = Permutasi" << endl;
                            cout << "n! = Jumlah Benda Faktorial" << endl;
                            cout << "Dalam Soal Ini, n = " << nilai << ", Sehingga nPn = " << nilai << "!." << endl;
                            faktorial(nilai);
                            double n = nilai; // Angka yang ingin dihitung faktorialnya
                            double hasil = 1;

                            cout << n << "! = "; // Menampilkan awal output "4! ="

                            // Menghitung faktorial dan menampilkan urutan perkalian
                            for (int i = n; i >= 1; i--)
                            {
                                hasil *= i;
                                cout << i; // Menampilkan angka
                                if (i > 1)
                                {
                                    cout << " x "; // Menambahkan "×" antara angka
                                }
                            }
                            cout << endl;
                            cout << "Jadi,Banyaknya Cara Duduk Yang Berbeda adalah " << nilai << " = " << faktorial(nilai) << endl;
                        }
                    }
                    else
                    {
                        cout << "Nilai Yang Diinput Tidak Dapat Diproses " << endl;
                        cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                        cin >> kembali;
                        cout << endl;
                    }
                } while (kembali == 'y');
                break;
            default:
                cout << endl;
                cout << "Menu Tidak Tersedia" << endl;
            }

            break;
        case 2:
            int soal2;
            cout << "+==================================+" << endl;
            cout << "+  PERMUTASI R UNSUR DAN N ELEMEN  +" << endl;
            cout << "+==================================+" << endl;
            cout << "Soal : " << endl;
            cout << "1. Sebuah toko roti memiliki x jenis roti yang berbeda. Berapa banyak cara untuk memilih x jenis roti untuk dijual?" << endl;
            cout << "2. Di sebuah sekolah menengah sedang ada pemilihan ketua OSIS beserta wakilnya. Para siswa diminta untuk memilih x orang dari x orang kandidat. Maka banyak cara yang dapat dilakukan sebanyak…" << endl;
            cout << "3. Sekolah akan mengirimkan x orang siswa untuk mengikuti perlombaan membaca puisi dalam menyambut Hari Pendidikan Nasional. Berapa cara yang dapat dilakukan oleh guru untuk menyeleksi x wakil sekolah yang akan dikirimkan jika terdapat x orang siswa yang mahir membaca puisi?" << endl;
            cout << "Pilih soal (1-3) : ";
            cin >> soal2;
            switch (soal2)
            {
            case 1:
                cout << "1. Sebuah toko roti memiliki x jenis roti yang berbeda. Berapa banyak cara untuk memilih x jenis roti untuk dijual?" << endl;
                do
                {
                    cout << endl;
                    double roti, cara;
                    cout << "Silahkan Masukan Nilai n : ";
                    cin >> roti;
                    cout << "Silahkan Masukan Nilai r : ";
                    cin >> cara;
                    if (roti > 0 && roti <= 709 || cara < 0 && cara <= 709)
                    {
                        cout << endl;
                        cout << "Contoh Soal" << endl;
                        cout << "1.Sebuah toko roti memiliki " << roti << " jenis roti yang berbeda. Berapa banyak cara untuk memilih " << cara << " jenis roti untuk dijual?" << endl;
                        cout << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut " << endl;
                            cout << "Dalam Soal Ini, n = " << roti << ", dan r = " << cara << "." << endl;
                            cout << "P(n,r) = n!/(n-r)!" << endl;
                            double n = roti;
                            double r = cara;

                            cout << "P( " << roti << "," << cara << ")" << endl;
                            cout << "=" << roti << "!/( " << roti << "-" << cara << ")!" << endl;
                            double penyebut = roti - cara;
                            cout << "= " << roti << "!/" << penyebut << "!" << endl;

                            cout << "= ";
                            for (int i = roti; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << " / ";
                            for (int i = penyebut; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }

                            cout << "= " << faktorial(roti) / faktorial(penyebut);
                            cout << endl;
                            cout << "Jadi, Ada " << faktorial(roti) / faktorial(penyebut) << " cara untuk memilih " << cara << " jenis roti untuk dijual" << endl;
                        }
                    }
                    else
                    {
                        cout << "Nilai Yang Diinput Tidak Dapat Diproses " << endl;
                        cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                        cin >> kembali;
                        cout << endl;
                    }
                } while (kembali == 'y');
                break;
            case 2:
                cout << "2. Di sebuah sekolah menengah sedang ada pemilihan ketua OSIS beserta wakilnya. Para siswa diminta untuk memilih x orang dari x orang kandidat. Maka banyak cara yang dapat dilakukan sebanyak…" << endl;
                do
                {
                    cout << endl;
                    double pilihan, kandidat;
                    cout << "Silahkan Masukan Nilai n : ";
                    cin >> kandidat;
                    cout << "Silahkan Masukan Nilai r : ";
                    cin >> pilihan;
                    if (pilihan > 0 && pilihan <= 709 || kandidat > 0 && kandidat <= 709)
                    {
                        cout << endl;
                        cout << "Contoh Soal" << endl;
                        cout << "2. Di sebuah sekolah menengah sedang ada pemilihan ketua OSIS beserta wakilnya. Para siswa diminta untuk memilih " << pilihan << " orang dari " << kandidat << " orang kandidat. Maka banyak cara yang dapat dilakukan sebanyak…" << endl;
                        cout << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut " << endl;
                            cout << "Dalam Soal Ini, n = " << kandidat << ", dan r = " << pilihan << "." << endl;
                            cout << "P(n,r) = n!/(n-r)!" << endl;

                            cout << "P( " << kandidat << "," << pilihan << ")" << endl;
                            cout << "=" << kandidat << "!/( " << kandidat << "-" << pilihan << ")!" << endl;
                            double penyebut2 = kandidat - pilihan;
                            cout << "= " << kandidat << "!/" << penyebut2 << "!" << endl;

                            cout << "= ";
                            for (int i = kandidat; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << " / ";
                            for (int i = penyebut2; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }

                            cout << "= " << faktorial(kandidat) / faktorial(penyebut2);
                            cout << endl;
                            cout << "Jadi, Ada " << faktorial(kandidat) / faktorial(penyebut2) << " cara untuk memilih " << pilihan << " dari " << kandidat << " kandidat" << endl;
                        }
                    }
                    else
                    {
                        cout << "Nilai Yang Diinput Tidak Dapat Diproses " << endl;
                        cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                        cin >> kembali;
                        cout << endl;
                    }
                } while (kembali == 'y');
                break;
            case 3:
                cout << "3. Sekolah akan mengirimkan x orang siswa untuk mengikuti perlombaan membaca puisi dalam menyambut Hari Pendidikan Nasional. Berapa cara yang dapat dilakukan oleh guru untuk menyeleksi x wakil sekolah yang akan dikirimkan jika terdapat x orang siswa yang mahir membaca puisi?" << endl;
                do
                {
                    cout << endl;
                    double wakil, mahir;
                    cout << "Silahkan Masukan Nilai n : ";
                    cin >> mahir;
                    cout << "Silahkan Masukan Nilai r : ";
                    cin >> wakil;
                    if (mahir > 0 && mahir <= 709 || wakil > 0 && wakil <= 709)
                    {
                        cout << endl;
                        cout << "Contoh Soal" << endl;
                        cout << "3. Sekolah akan mengirimkan " << wakil << " orang siswa untuk mengikuti perlombaan membaca puisi dalam menyambut Hari Pendidikan Nasional. Berapa cara yang dapat dilakukan oleh guru untuk menyeleksi " << wakil << "  wakil sekolah yang akan dikirimkan jika terdapat " << mahir << " orang siswa yang mahir membaca puisi?" << endl;
                        cout << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut " << endl;
                            cout << "Dalam Soal Ini, n = " << mahir << ", dan r = " << wakil << "." << endl;
                            cout << "P(n,r) = n!/(n-r)!" << endl;

                            cout << "P( " << mahir << "," << wakil << ")" << endl;
                            cout << "=" << mahir << "!/( " << mahir << "-" << wakil << ")!" << endl;
                            double penyebut3 = mahir - wakil;
                            cout << "= " << mahir << "!/" << penyebut3 << "!" << endl;

                            cout << "= ";
                            for (int i = mahir; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << " / ";
                            for (int i = penyebut3; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }

                            cout << "= " << faktorial(mahir) / faktorial(penyebut3);
                            cout << endl;
                            cout << "Jadi, Ada " << faktorial(mahir) / faktorial(penyebut3) << " cara untuk memilih " << wakil << " wakil dari " << mahir << " siswa mahir" << endl;
                            break;
                        }
                    }
                    else
                    {
                        cout << "Nilai Yang Diinput Tidak Dapat Diproses " << endl;
                        cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                        cin >> kembali;
                        cout << endl;
                    }
                } while (kembali == 'y');
                break;
            default:
                cout << endl;
                cout << "Menu Tidak Tersedia" << endl;
                break;
            }
            break;
        case 3:
            cout << "+====================================+" << endl;
            cout << "+  PERMUTASI DENGAN UNSUR YANG SAMA  +" << endl;
            cout << "+====================================+" << endl;
            double n, x, y, z;
            double bola, bsepak, bbasket, bvoli;
            double pakaian, kaos, celana, kemeja;
            int soal3;
            cout << "Soal :" << endl;
            cout << "1. Ada n Huruf, Yaitu p Huruf A, q Huruf B, r Huruf C. Berapa Banyak Susunan Huruf Yang Dapat Dibentuk?" << endl;
            cout << "2. Sebuah Kotak Berisi Ada * Jenis bola. Dari * Bola Itu Ada * Bola Sepak, * Bola Basket, Dan * Bola Voli. Jika Bola-Bola Itu Disusun Teratur Dalam Sebaris, Berapakah Banyak Susunan Yang Bisa Dibuat?" << endl;
            cout << "3. Terdapat Lemari Yang Berisi * Pakaian.Dari * Pakaian Itu Ada * Kaos, * Celana Panjang,Dan * Kemeja.Jika Pakaian Itu Disusun Teratur,Berapakah Banyak Susunan Pakaian Yang Dapat Dibuat?" << endl;
            cout << "Pilih Soal (1-3) : ";
            cin >> soal3;
            switch (soal3)
            {
            case 1:
                cout << "1. Ada n Huruf, Yaitu p Huruf A, q Huruf B, r Huruf C. Berapa Banyak Susunan Huruf Yang Dapat Dibentuk?" << endl;
                do
                {
                    cout << endl;
                    cout << "Masukkan nilai n (tentukan panjang susunan huruf):";
                    cin >> n;
                    cout << "Masukkan nilai p : ";
                    cin >> x;
                    cout << "Masukkan nilai q : ";
                    cin >> y;
                    cout << "Masukkan nilai r : ";
                    cin >> z;
                    if ((x + y + z) > n)
                    {
                        if ((n > 0 && n <= 709) || (x > 0 && x <= 709) || (y > 0 && y <= 709) || (z > 0 && z <= 709))
                        {
                            cout << "Nilai Melebihi N Atau Nilai Melebihi Batas" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                            cin >> kembali;
                        }
                    }
                    else
                    {
                        cout << "1. Ada " << n << " huruf, yaitu " << x << " huruf A, " << y << " huruf B," << z << "  huruf C. Berapa banyak sususnan huruf yang dapat dibentuk?" << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut : " << endl;
                            cout << endl;
                            cout << "n = " << n << ", p = " << x << ", q = " << y << ", r = " << z << endl;
                            cout << "P(n,pqr)" << endl;
                            cout << "n! / p! * q! * r!" << endl;
                            cout << n << "! / " << x << "! * " << y << "! * " << z << "!" << endl;

                            for (int i = n; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                                else
                                {
                                    cout << "!";
                                }
                            }
                            cout << " / ";
                            for (int i = x; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << "*";
                            for (int i = y; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << "*";
                            for (int i = z; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << "= " << faktorial(n) / (faktorial(x) * faktorial(y) * faktorial(z)) << endl;
                        }
                    }
                } while (kembali == 'y');

                break;
            case 2:
                cout << "2. Sebuah Kotak Berisi Ada * Jenis bola. Dari * Bola Itu Ada * Bola Sepak, * Bola Basket, Dan * Bola Voli. Jika Bola-Bola Itu Disusun Teratur Dalam Sebaris, Berapakah Banyak Susunan Yang Bisa Dibuat?" << endl;
                do
                {
                    cout << endl;
                    cout << "Masukkan n (Banyak Jenis Bola) :";
                    cin >> bola;
                    cout << "Banyak p (Bola Sepak) :";
                    cin >> bsepak;
                    cout << "Banyak q (Bola Basket) :";
                    cin >> bbasket;
                    cout << "Banyak r (Bola Voli) :";
                    cin >> bvoli;
                    if ((bsepak + bbasket + bvoli) > bola)
                    {
                        if ((bola > 0 && bola <= 709) || (bsepak > 0 && bsepak <= 709) || (bbasket > 0 && bbasket <= 709) || (bvoli > 0 && bvoli <= 709))
                        {
                            cout << "Nilai Melebihi N Atau Nilai Melebihi Batas" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                            cin >> kembali;
                        }
                    }
                    else
                    {
                        cout << "2. Sebuah Kotak Berisi Ada " << bola << " Jenis bola. Dari " << bola << " Bola Itu Ada " << bsepak << " Bola Sepak, " << bbasket << " Bola Basket, Dan " << bvoli << " Bola Voli. Jika Bola-Bola Itu Disusun Teratur Dalam Sebaris, Berapakah Banyak Susunan Yang Bisa Dibuat?" << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut : " << endl;
                            cout << endl;
                            cout << "n = " << bola << ", p = " << bsepak << ", q = " << bbasket << ", r = " << bvoli << endl;
                            cout << "P(n,pqr)" << endl;
                            cout << "n! / p! * q! * r!" << endl;
                            cout << bola << "! / " << bsepak << "! * " << bbasket << "! * " << bvoli << "!" << endl;

                            for (int i = bola; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                                else
                                {
                                    cout << "!";
                                }
                            }
                            cout << " / ";
                            for (int i = bsepak; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << "*";
                            for (int i = bbasket; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << "*";
                            for (int i = bvoli; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << "= " << faktorial(bola) / (faktorial(bsepak) * faktorial(bbasket) * faktorial(bvoli)) << endl;
                        }
                    }
                } while (kembali == 'y');
                break;
            case 3:
                cout << "3. Terdapat Lemari Yang Berisi * Pakaian.Dari * Pakaian Itu Ada * Kaos, * Celana Panjang,Dan * Kemeja.Jika Pakaian Itu Disusun Teratur,Berapakah Banyak Susunan Pakaian Yang Dapat Dibuat?" << endl;
                do
                {
                    cout << endl;
                    cout << "Masukkan n (Banyak Pakaian) :";
                    cin >> pakaian;
                    cout << "Banyak p (Kaos) :";
                    cin >> kaos;
                    cout << "Banyak q (Celana Panjang) :";
                    cin >> celana;
                    cout << "Banyak r (Kemeja) :";
                    cin >> kemeja;
                    if ((kaos + celana + kemeja) > pakaian)
                    {
                        if ((pakaian > 0 && pakaian <= 709) || (kaos > 0 && kaos <= 709) || (celana > 0 && celana <= 709) || (kemeja > 0 && kemeja <= 709))
                        {
                            cout << "Nilai Melebihi N Atau Nilai Melebihi Batas" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                            cin >> kembali;
                        }
                    }
                    else
                    {
                        cout << "3. Terdapat Lemari Yang Berisi " << pakaian << " Pakaian.Dari " << pakaian << " Pakaian Itu Ada " << kaos << " Kaos, " << celana << " Celana Panjang,Dan " << kemeja << " Kemeja.Jika Pakaian Itu Disusun Teratur,Berapakah Banyak Susunan Pakaian Yang Dapat Dibuat?" << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut : " << endl;
                            cout << endl;
                            cout << "n = " << pakaian << ", p = " << kaos << ", q = " << celana << ", r = " << kemeja << endl;
                            cout << "P(n,pqr)" << endl;
                            cout << "n! / p! * q! * r!" << endl;
                            cout << pakaian << "! / " << kaos << "! * " << celana << "! * " << kemeja << "!" << endl;

                            for (int i = pakaian; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                                else
                                {
                                    cout << "!";
                                }
                            }
                            cout << " / ";
                            for (int i = kaos; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << "*";
                            for (int i = celana; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << "*";
                            for (int i = kemeja; i > 0; --i)
                            {
                                cout << i;
                                if (i > 1)
                                {
                                    cout << " x ";
                                }
                            }
                            cout << "= " << faktorial(pakaian) / (faktorial(kaos) * faktorial(celana) * faktorial(kemeja)) << endl;
                        }
                        break;
                    }
                } while (kembali == 'y');
                break;
            default:
                cout << endl;
                cout << "Menu Tidak Tersedia" << endl;
            }
            break;
        case 4:
            cout << "+=======================+" << endl;
            cout << "+    PERMUTASI SIKLIS   +" << endl;
            cout << "+=======================+" << endl;
            double pernik;
            double roda;
            double mahasiswa;
            int soal4;
            cout << "Soal : " << endl;
            cout << "1. Mala Mempunyai x Buah Pernik Yang Berbeda Warna , Yang Akan Disusun Pada Sebuah Gelang Banyaknya Cara Mala Menyusun Pernik Untuk Menjadi Gelang Adalah " << endl;
            cout << "2. Sebuah Roda Berputar Memiliki x Jari-Jari. Berapa Banyak Susunan Jari-Jari Yang Dapat Dibentuk Jika Jari-Jari Tersebut Tidak Dapat Dipindahkan?" << endl;
            cout << "3. .. Orang Mahasiswa Memasuki Ruang Diskusi. Mereka Melakukan Diskusi Di Meja Bundar. Berapa Banyak Cara Yang Dapat Dilakukan Agar Ke.. Mahasiswa Itu Dapat Duduk Melingkar Dengan Urutan Yang Berbeda?" << endl;
            cout << "Pilh Soal (1-3) :";
            cin >> soal4;
            switch (soal4)
            {
            case 1:
                cout << "1. Mala Mempunyai x Buah Pernik Yang Berbeda Warna , Yang Akan Disusun Pada Sebuah Gelang Banyaknya Cara Mala Menyusun Pernik Untuk Menjadi Gelang Adalah " << endl;
                do
                {
                    cout << endl;
                    cout << "Silahkan Masukkan Nilai : ";
                    cin >> pernik;
                    if (pernik > 0 && pernik <= 709)
                    {
                        cout << "1. Mala Mempunyai " << pernik << " Buah Pernik Yang Berbeda Warna , Yang Akan Disusun Pada Sebuah Gelang Banyaknya Cara Mala Menyusun Pernik Untuk Menjadi Gelang Adalah " << endl;
                        cout << endl;
                        cout << "P: permutasi." << endl;
                        cout << "n: banyaknya unsur" << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut " << endl;
                            cout << "Dalam Soal Ini, n = " << pernik << ", Dan Bentuk Gelang , Sehingga P(n,n) Tidak Berlaku. Yang Berlaku Adalah Rumus Permutasi Siklis, Yaitu:" << endl;
                            double penyebut2 = pernik - 1;
                            cout << "Ps(" << pernik << ") = (" << pernik << "-1)!" << endl;
                            double hasil = faktorial(penyebut2);
                            double perkalian = 1;

                            cout << penyebut2 << "! = "; // Menampilkan awal output "4! ="

                            // Menghitung faktorial dan menampilkan urutan perkalian
                            for (int i = penyebut2; i >= 1; i--)
                            {
                                perkalian *= i;
                                cout << i; // Menampilkan angka
                                if (i > 1)
                                {
                                    cout << " x "; // Menambahkan "×" antara angka
                                }
                            }
                            cout << endl;
                            cout << "Ps(" << pernik << ") = " << hasil << " Jadi, Ada " << hasil << " Cara Mala Menyusun Pernik Menjadi Gelang." << endl;
                        }
                    }
                    else
                    {
                        cout << "Nilai Yang Diinput Tidak Dapat Diproses " << endl;
                        cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                        cin >> kembali;
                        cout << endl;
                    }
                } while (kembali == 'y');
                break;
            case 2:
                cout << "2. Sebuah Roda Berputar Memiliki x Jari-Jari. Berapa Banyak Susunan Jari-Jari Yang Dapat Dibentuk Jika Jari-Jari Tersebut Tidak Dapat Dipindahkan?" << endl;
                do
                {
                    cout << endl;
                    cout << "Silahkan Masukkan Nilai : ";
                    cin >> roda;
                    if (roda > 0 && roda <= 709)
                    {
                        cout << "2. Sebuah Roda Berputar Memiliki x Jari-Jari. Berapa Banyak Susunan Jari-Jari Yang Dapat Dibentuk Jika Jari-Jari Tersebut Tidak Dapat Dipindahkan?" << endl;
                        cout << endl;
                        cout << "P: permutasi." << endl;
                        cout << "n: banyaknya unsur" << endl;
                        cout << "Sebuah roda berputar memiliki " << roda << " jari-jari. Berapa banyak susunan jari-jari yang dapat dibentuk jika jari-jari tersebut tidak dapat dipindahkan?" << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut " << endl;
                            cout << "Dalam Soal Ini, n = " << roda << ", Dan Posisi Jari-Jari melingkar, Sehingga P(n,n) Tidak Berlaku. Yang Berlaku Adalah Rumus Permutasi Siklis, Yaitu:" << endl;
                            double penyebut2 = roda - 1;
                            cout << "Ps(" << roda << ") = (" << roda << "-1)!" << endl;
                            double hasil = faktorial(penyebut2);
                            double perkalian = 1;

                            cout << penyebut2 << "! = "; // Menampilkan awal output "4! ="

                            // Menghitung faktorial dan menampilkan urutan perkalian
                            for (int i = penyebut2; i >= 1; i--)
                            {
                                perkalian *= i;
                                cout << i; // Menampilkan angka
                                if (i > 1)
                                {
                                    cout << " x "; // Menambahkan "×" antara angka
                                }
                            }
                            cout << endl;
                            cout << "Ps(" << roda << ") = " << hasil << " Jadi, Ada " << hasil << " Susunan Jari-Jari Yang Dapat Dibentuk." << endl;
                        }
                    }
                    else
                    {
                        cout << "Nilai Yang Diinput Tidak Dapat Diproses " << endl;
                        cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                        cin >> kembali;
                        cout << endl;
                    }
                } while (kembali == 'y');
                break;
            case 3:
                cout << "3. .. Orang Mahasiswa Memasuki Ruang Diskusi. Mereka Melakukan Diskusi Di Meja Bundar. Berapa Banyak Cara Yang Dapat Dilakukan Agar Ke.. Mahasiswa Itu Dapat Duduk Melingkar Dengan Urutan Yang Berbeda?" << endl;
                do
                {
                    cout << endl;
                    cout << "Silahkan Masukkan Nilai : ";
                    cin >> mahasiswa;
                    if (mahasiswa > 0 && mahasiswa <= 709)
                    {
                        cout << "3. " << mahasiswa << " Mahasiswa Memasuki Ruang Diskusi. Mereka Melakukan Diskusi Di Meja Bundar. Berapa Banyak Cara Yang Dapat Dilakukan Agar Ke " << mahasiswa << " Mahasiswa Itu Dapat Duduk Melingkar Dengan Urutan Yang Berbeda?" << endl;
                        cout << endl;
                        cout << "P: permutasi." << endl;
                        cout << "n: banyaknya unsur" << endl;
                        cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                        cin >> masukan;
                        if (masukan == 'y')
                        {
                            cout << endl;
                            loading();
                            cout << endl;
                            cout << "Penyelesaian Sebagai Berikut " << endl;
                            cout << "Dalam Soal Ini, n = " << mahasiswa << ", Dan Posisi Duduk Melingkar, Sehingga P(n,n) Tidak Berlaku. Yang Berlaku Adalah Rumus Permutasi Siklis, Yaitu:" << endl;
                            double penyebut2 = mahasiswa - 1;
                            cout << "Ps(" << mahasiswa << ") = (" << mahasiswa << "-1)!" << endl;
                            double hasil = faktorial(penyebut2);
                            double perkalian = 1;

                            cout << penyebut2 << "! = "; // Menampilkan awal output "4! ="

                            // Menghitung faktorial dan menampilkan urutan perkalian
                            for (int i = penyebut2; i >= 1; i--)
                            {
                                perkalian *= i;
                                cout << i; // Menampilkan angka
                                if (i > 1)
                                {
                                    cout << " x "; // Menambahkan "×" antara angka
                                }
                            }
                            cout << endl;
                            cout << "Ps(" << mahasiswa << ") = " << hasil << " Jadi, Ada " << hasil << " Cara Mahasiswa Itu Dapat Duduk Melingkar Dengan Urutan Yang Berbeda." << endl;
                        }
                    }
                    else
                    {
                        cout << "Nilai Yang Diinput Tidak Dapat Diproses " << endl;
                        cout << "Silahkan Kembali Mengisi Nilai!(y) :";
                        cin >> kembali;
                        cout << endl;
                    }
                } while (kembali == 'y');
                break;
            default:
                cout << endl;
                cout << "Menu Tidak Tersedia" << endl;
            }
            break;

        case 5:
            cout << "+===============================================+" << endl;
            cout << "+  PERMUTASI TERDIRI DARI N ELEMEN DAN K UNSUR  +" << endl;
            cout << "+===============================================+" << endl;
            double bola1, cara1;
            double siswa, cara2;
            double baju, cara3;
            int soal5;
            cout << "Soal : " << endl;
            cout << "1. Ada .. Bola Merah Yang Identik. Berapa Banyak Cara Untuk Mengatur Ulang Bola Merah Dari .. Bola Tersebut?" << endl;
            cout << "2. Terdapat .. Siswa Yang Sedang Duduk. Berapa Banyak Cara Untuk Mengatur Duduk Mereka Dari .. Siswa Tersebut" << endl;
            cout << "3. Andi Mempunyai .. Baju Merah. Berapa Sering Andi Memakai Baju Merah Dari .. Baju Tersebut " << endl;
            cout << "Pilih Soal (1-3) : ";
            cin >> soal5;
            switch (soal5)
            {
            case 1:
                cout << "1. Ada .. Bola Merah Yang Identik. Berapa Banyak Cara Untuk Mengatur Ulang Bola Merah Dari .. Bola Tersebut?" << endl;
                do
                {
                    cout<<endl;
                    cout << "Masukan Jumlah Bola : ";
                    cin >> bola1;
                    cout << "Masukan Banyak Cara : ";
                    cin >> cara1;
                    if (bola1 != cara1)
                    {
                        if (bola1 > 0 && bola1 <= 709 || cara1 > 0 && cara1 <= 709)
                        {
                            double hasil = bola1 - cara1;
                            cout << "Contoh Soal " << endl;
                            cout << "Ada " << bola1 << " bola merah yang identik. Berapa banyak cara untuk mengatur ulang " << cara1 << " bola merah dari " << bola1 << " bola tersebut?" << endl;
                            cout << "Dalam soal ini, n = " << bola1 << ", dan k = " << cara1 << endl;
                            cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                            cin >> masukan;
                            if (masukan == 'y')
                            {
                                cout << endl;
                                loading();
                                cout << endl;
                                cout << "Penyelesaian Sebagai Berikut " << endl;
                                cout << "Permutasi berulang dari n unsur, di mana tipe permutasinya terdiri dari k unsur, dapat dihitung dengan rumus berikut" << endl;
                                cout << "P(n,k) = (n-k)!" << endl;
                                cout << "P(" << bola1 << "," << cara1 << ") = (" << bola1 << "-" << cara1 << ")!" << " = " << bola1 - cara1 << "!" << " = " << faktorial(hasil) << endl;
                                cout << "Jadi, Ada " << faktorial(hasil) << "  Cara Untuk Mengatur Ulang " << cara1 << " Bola Merah Dari " << bola1 << " bola tersebut." << endl;
                            }
                        }
                        else
                        {
                            cout << "Nilai Yang Dimasukkan Tidak Boleh Sama Atau Melebihi Batas,Nilai Tidak Dapat Diproses!" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai! (y) :";
                            cin >> kembali;   
                        }
                    }
                    else
                    {   
                        if (bola1 > 0 && bola1 <= 709 || cara1 > 0 && cara1 <= 709)
                        {
                            cout << "Nilai Yang Dimasukkan Tidak Boleh Sama Atau Melebihi Batas,Nilai Tidak Dapat Diproses!" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai! (y) :";
                            cin >> kembali;
                        }
                        else
                        {
                            cout << "Nilai Yang Dimasukkan Tidak Boleh Sama Atau Melebihi Batas,Nilai Tidak Dapat Diproses!" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai! (y) :";
                            cin >> kembali; 
                        }
                    }
                } while (kembali == 'y');
                break;
            case 2:
                cout << "2. Terdapat .. Siswa Yang Sedang Duduk. Berapa Banyak Cara Untuk Mengatur Duduk Mereka Dari .. Siswa Tersebut" << endl;
                do
                {
                    cout<<endl;
                    cout << "Masukkan Jumlah Siswa : ";
                    cin >> siswa;
                    cout << "Masukkan Jumlah Cara : ";
                    cin >> cara2;
                    if (siswa == cara2)
                    {
                        if (siswa > 0 && siswa <= 709 || cara2 > 0 && cara2 <= 709)
                        {
                            cout << "Nilai Yang Dimasukkan Tidak Boleh Sama Atau Melebihi Batas,Nilai Tidak Dapat Diproses!" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai! (y) :";
                            cin >> kembali;
                        }
                        else{
                            cout << "Nilai Yang Dimasukkan Tidak Boleh Sama Atau Melebihi Batas,Nilai Tidak Dapat Diproses!" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai! (y) :";
                            cin >> kembali;
                        }
                    
                    }
                    else
                    {   
                        if (siswa > 0 && siswa <= 709 || cara2 > 0 && cara2 <= 709)
                        {
                            double hasil = siswa - cara2;
                            cout << "Contoh Soal " << endl;
                            cout << "2.Terdapat " << siswa << " Siswa Yang Sedang Duduk. Berapa Banyak Cara Untuk Mengatur Duduk Mereka Dari " << cara2 << " Siswa Tersebut" << endl;
                            cout << "Dalam soal ini, n = " << siswa << ", dan k = " << cara2 << endl;
                            cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                            cin >> masukan;
                            if (masukan == 'y')
                            {
                                cout << endl;
                                loading();
                                cout << endl;
                                cout << "Penyelesaian Sebagai Berikut " << endl;
                                cout << "Permutasi berulang dari n unsur, di mana tipe permutasinya terdiri dari k unsur, dapat dihitung dengan rumus berikut" << endl;
                                cout << "P(n,k) = (n-k)!" << endl;
                                cout << "P(" << siswa << "," << cara2 << ") = (" << siswa << "-" << cara2 << ")!" << " = " << siswa - cara2 << "!" << " = " << faktorial(hasil) << endl;
                                cout << "Jadi, Ada " << faktorial(hasil) << "  Cara Untuk Mengatur Duduk " << cara2 << " Siswa Dari " << siswa << " Bola tersebut." << endl;
                            }
                        }
                        else
                        {
                            cout << "Nilai Yang Dimasukkan Tidak Boleh Sama Atau Melebihi Batas,Nilai Tidak Dapat Diproses!" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai! (y) :";
                            cin >> kembali;
                        }
                        
                    }
                } while (kembali == 'y');
                break;
            case 3:
                cout << "3. Andi Mempunyai .. Baju Merah. Berapa Sering Andi Memakai Baju Merah Dari .. Baju Tersebut " << endl;
                do
                {
                    cout<<endl;
                    cout << "Masukkan Jumlah Baju : ";
                    cin >> baju;
                    cout << "Masukkan Jumlah Cara : ";
                    cin >> cara3;
                    if (baju == cara3)
                    {
                        if (baju > 0 && baju <= 709 || cara3 > 0 && cara3 <= 709)
                        {
                            cout << "Nilai Yang Dimasukkan Tidak Boleh Sama Atau Melebihi Batas,Nilai Tidak Dapat Diproses!" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai! (y) :";
                            cin >> kembali;
                        }
                        else
                        {
                            cout << "Nilai Yang Dimasukkan Tidak Boleh Sama Atau Melebihi Batas,Nilai Tidak Dapat Diproses!" << endl;
                            cout << "Silahkan Kembali Mengisi Nilai! (y) :";
                            cin >> kembali;
                        }
                    }
                    else
                    {
                        if (baju > 0 && baju <= 709 || cara3 > 0 && cara3 <= 709)
                        {
                            double hasil = baju - cara3;
                            cout << "Contoh Soal " << endl;
                            cout << "3. Andi Mempunyai " << baju << " Baju Merah. Berapa Sering Andi Memakai Baju Merah Dari " << cara3 << " Baju Tersebut " << endl;
                            cout << "Dalam soal ini, n = " << baju << ", dan k = " << cara3 << endl;
                            cout << "Apakah Ingin Memunculkan Penyelesaian ? (y/t): ";
                            cin >> masukan;
                            if (masukan == 'y')
                            {
                                cout << endl;
                                loading();
                                cout << endl;
                                cout << "Penyelesaian Sebagai Berikut " << endl;
                                cout << "Permutasi berulang dari n unsur, di mana tipe permutasinya terdiri dari k unsur, dapat dihitung dengan rumus berikut" << endl;
                                cout << "P(n,k) = (n-k)!" << endl;
                                cout << "P(" << baju << "," << cara3 << ") = (" << baju << "-" << cara3 << ")!" << " = " << baju - cara3 << "!" << " = " << faktorial(hasil) << endl;
                                cout << "Jadi, Ada " << faktorial(hasil) << " Cara Untuk Memprediksi Andi " << cara3 << " Memakai Baju Merah Dari " << baju << " Baju Tersebut." << endl;
                            }
                        }
                    }
                } while (kembali == 'y');
                break;
            default:
                cout << endl;
                cout << "Menu Tidak Tersedia" << endl;
            }
            break;
        default:
            cout << endl;
            cout << "Mohon Maaf Menu Kita Hanya Tersedia 5" << endl;
        }
        cout << endl;
        cout << "Apakah Anda Ingin Kembali Ke Menu Utama ? (y /t) :";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
}

void loading()
{
    cout << "Loading";
    char x = 46;
    for (int i = 0; i < 5; i++)
    { // untuk mengeluarkan (.) dari 0 sampai 5
        cout << x;
        if (i < 10)
            ;
        Sleep(500); // sleep digunakan untuk jeda 500 milisecond = 0,5 detik
        if (i >= 10 && i < 20)
            Sleep(150);
        if (i > 10)
            Sleep(25);
    }
    cout << endl;
}
double faktorial(double x)
{
    if (x == 1)
        return (x);
    else
        return (x * faktorial(x - 1));
}

