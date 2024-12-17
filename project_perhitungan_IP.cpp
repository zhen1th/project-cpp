#include <iostream>
using namespace std;
int main(){
    string nama, plug, semangat;
    int nim;
    float nilai_logikaT, nilai_logikaK, nilai_logikaR,
    nilai_algoT, nilai_algoK, nilai_algoR, rata_logika,
    rata_algo, ipalgo,iplogika, iphasil;
    char skorlogika, skoralgo;
    
    cout << "+===================================+" << endl;
    cout << "|PROGRAM PERHITUNGAN NILAI MAHASISWA|" << endl;
    cout << "+===================================+" << endl;

    cout << "Masukkan nama anda : ";
    getline (cin, nama);
    cout << "Masukkan nim anda : ";
    cin >> nim;
    cout << "Masukkan plug anda : ";
    cin >> plug;

    cout << "\nMatakuliah Logika" << endl;
    cout << "Masukkan Nilai Tugas : ";
    cin >> nilai_logikaT;
    cout << "Masukkan Nilai Kuis : ";
    cin >> nilai_logikaK;
    cout << "Masukkan Nilai Responsi : ";
    cin >> nilai_logikaR;

    rata_logika = (nilai_logikaT + nilai_logikaK + nilai_logikaR)/3;
    if (rata_logika >= 90){
        skorlogika = 'A';
        iplogika = 4.00;
        cout << "Skor : " << skorlogika << endl;
    }else if (rata_logika >= 80 && rata_logika < 90){
        skorlogika = 'B';
        iplogika = 3.00;
        cout << "Skor : " << skorlogika << endl;
    }else if (rata_logika >= 70 && rata_logika <80){
        skorlogika = 'C';
        iplogika = 2.00;
        cout << "Skor : " << skorlogika << endl;
    }else if (rata_logika >= 60 && rata_logika <70){
        skorlogika = 'D';
        iplogika = 1.00;
        cout << "Skor : " << skorlogika << endl;
    }else if (rata_logika < 60){
        skorlogika = 'E';
        iplogika = 0;
        cout << "Skor : " << skorlogika << endl;
    }

    cout << "\nMatakuliah Algoritma dan Pemograman" << endl;
    cout << "Masukkan Nilai Tugas : ";
    cin >> nilai_algoT;
    cout << "Masukkan Nilai Kuis : ";
    cin >> nilai_algoK;
    cout << "Masukkan Nilai Responsi : ";
    cin >> nilai_algoR;
    
    rata_algo = (nilai_algoT + nilai_algoK + nilai_algoR)/3;
    if (rata_algo >= 90){
        skoralgo = 'A';
        ipalgo = 4.00;
        cout << "Skor : " << skoralgo << endl;
    }else if (rata_algo >= 80 && rata_algo < 90){
        skoralgo = 'B';
        ipalgo = 3.00;
        cout << "Skor : " << skoralgo << endl;
    }else if (rata_algo >= 70 && rata_algo <80){
        skoralgo = 'C';
        ipalgo = 2.00;
        cout << "Skor : " << skoralgo << endl;
    }else if (rata_algo >= 60 && rata_algo <70){
        skoralgo = 'D';
        ipalgo = 1.00;
        cout << "Skor : " << skoralgo << endl;
    }else if (rata_algo < 60){
        skoralgo = 'E';
        ipalgo = 0;
        cout << "Skor : " << skoralgo << endl << endl;
    }

    iphasil = (ipalgo + iplogika)/2;
    if (iphasil >= 3.5 && iphasil <=4.0){
        semangat = "Selamat anda mendapatkan ip maksimal";
    }else if (iphasil >= 3.0 && iphasil <3.5){
        semangat = "Tingkatkan lagi ya, udah bagus kok";
    }else if (iphasil < 3.0){
        semangat = "Ayok lebih semangat lagi belajarnya";
    }

    cout << "===========================" << endl;
    cout << "HASIL NILAI AKHIR MAHASISWA" << endl;
    cout << "===========================" << endl;
    cout << "Nama : " << nama << endl;
    cout << "NIM  : " << nim << endl;
    cout << "Plug : " << plug << endl;
    cout << "IP   : " << iphasil << endl;
    cout << semangat;
}