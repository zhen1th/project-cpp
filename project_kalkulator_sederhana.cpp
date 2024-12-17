#include <iostream>
#include <iomanip>          // untuk mengaktifkan setw
#include <conio.h>          // untuk mengaktifkan getch
#include <windows.h>        // untuk mengaktifkan Sleep
using namespace std;

float riwayat = 0;           // variabel global untuk deklarasi type data riwayat      
stringstream operasi;       // stringstream untuk menyimpan variabel ke bentuk string

// prototype
void login();
void menu();
float pembagian(float x, float y);
void perkalian(float &, float &);
float pengurangan(float x, float y);
void penjumlahan(float *, float *);
double konversiTanda(double nilai);
double konversiPersen(double nilai, double persen);
void exitProgram();
void loading();


int main(){
    int pilihMenu;
    float x, y, bilangan, persen;
    char ulangi;
    
    login();        // pemanggilan void login
    do{
        menu();                      // pemanggilan void menu
        cout << "Pilih : ";
        cin >> pilihMenu;
        loading();
        switch(pilihMenu){
            case 1 :
                cout << string(32,'=') << endl;
                cout << setw(0) << left << '|' << setw(20) << right << "Pembagian" << setw(11) << right << "|" << endl;
                cout << string(32,'=') << endl;
                cout << "Inputkan 2 bilangan : " << endl;
                cout << "Bil. 1 = ";
                cin >> x;
                cout << "Bil. 2 = ";
                cin >> y;
                cout << endl;
                cout << "Hasil Pembagian = " << pembagian(x,y) << endl;         // pass by value
                riwayat = pembagian(x,y);
                operasi.str("");                                                // agar operasi sebelumnya tidak tercantum kembali
                operasi << " (" << x << " / " << y << ")";
                cout << string(32,'=') << endl;
                cout << "Kembali ke menu? (y/n) : ";
                cin >> ulangi;
                loading();
                break;
            case 2 :
                cout << string(32,'=') << endl;
                cout << setw(0) << left << '|' << setw(20) << right << "Perkalian" << setw(11) << right << "|" << endl;
                cout << string(32,'=') << endl;
                cout << "Inputkan 2 bilangan : " << endl;
                cout << "Bil. 1 = ";
                cin >> x;
                cout << "Bil. 2 = ";
                cin >> y;
                cout << endl;
                operasi.str("");                                                // agar operasi sebelumnya tidak tercantum kembali
                operasi << " (" << x << " * " << y << ")";
                perkalian(x,y);                                                // pass by reference
                cout << "Hasil Perkalian = " << x << endl;
                riwayat = x;
                cout << string(32,'=') << endl;
                cout << "Kembali ke menu? (y/n) : ";
                cin >> ulangi;
                loading();
                break;
            case 3 :
                cout << string(32,'=') << endl;
                cout << setw(0) << left << '|' << setw(20) << right << "Pengurangan" << setw(11) << right << "|" << endl;
                cout << string(32,'=') << endl;
                cout << "Inputkan 2 bilangan : " << endl;
                cout << "Bil. 1 = ";
                cin >> x;
                cout << "Bil. 2 = ";
                cin >> y;
                cout << endl;
                cout << "Hasil Pengurangan = " << pengurangan(x,y) << endl;    // pass by value
                riwayat = pengurangan(x,y);
                operasi.str("");                                                // agar operasi sebelumnya tidak tercantum kembali
                operasi << " (" << x << " - " << y << ")";
                cout << string(32,'=') << endl;
                cout << "Kembali ke menu? (y/n) : ";
                cin >> ulangi;
                loading();
                break;
            case 4 :
                cout << string(32,'=') << endl;
                cout << setw(0) << left << '|' << setw(20) << right << "Penjumlahan" << setw(11) << right << "|" << endl;
                cout << string(32,'=') << endl;
                cout << "Inputkan 2 bilangan : " << endl;
                cout << "Bil. 1 = ";
                cin >> x;
                cout << "Bil. 2 = ";
                cin >> y;
                cout << endl;
                operasi.str("");                                        // agar operasi sebelumnya tidak tercantum kembali
                operasi << " (" << x << " + " << y << ")";
                penjumlahan(&x,&y);                                     // pas1s by address atau pointer
                cout << "Hasil Penjumlahan = " << x << endl;
                riwayat = x;
                cout << string(32,'=') << endl;
                cout << "Kembali ke menu? (y/n) : ";
                cin >> ulangi;
                loading();
                break;
            case 5 :
                cout << string(32,'=') << endl;
                cout << setw(0) << left << '|' << setw(20) << right << "Konversi +/-" << setw(11) << right << "|" << endl;
                cout << string(32,'=') << endl;
                cout << "Inputkan sebuah bilangan : " << endl;
                cout << "Bilangan = ";
                cin >> bilangan;
                cout << endl;
                cout << "Hasil Konversi Tanda = " << konversiTanda(bilangan) << endl;       // pass by value
                riwayat = konversiTanda(bilangan);
                operasi.str("");                                                            // agar operasi sebelumnya tidak tercantum kembali
                operasi << "(Konversi Tanda +/- dari " << bilangan << ")";
                cout << string(32,'=') << endl;
                cout << "Kembali ke menu? (y/n) : ";
                cin >> ulangi;
                loading();
                break;
            case 6 :
                cout << string(32,'=') << endl;
                cout << setw(0) << left << '|' << setw(20) << right << "Konversi %" << setw(11) << right << "|" << endl;
                cout << string(32,'=') << endl;
                cout << "Inputkan sebuah bilangan : " << endl;
                cout << "Bilangan = ";
                cin >> bilangan;
                cout << "Inputkan persen (tanpa simbol %) = ";
                cin >> persen;
                cout << endl;
                cout << "Hasil Konversi Persen = " << konversiPersen(bilangan,persen) << endl;      // pass by value
                riwayat = konversiPersen(bilangan,persen);
                operasi.str("");                                                                    // agar operasi sebelumnya tidak tercantum kembali
                operasi << " (" << persen << "% dari " << bilangan << ")";
                cout << string(32,'=') << endl;
                cout << "Kembali ke menu? (y/n) : ";
                cin >> ulangi;
                loading();
                break;
            case 0 :
                exitProgram();          // pemanggilan void exitProgram
                break;
            default :
                cout << "Anda SALAH memasukkan pilihan menu" << endl;
                cout << "Kembali ke menu? (y/n) : ";
                cin >> ulangi;        
        }
    }while(ulangi == 'y');          // looping untuk kembali ke menu
    while(ulangi == 'n'){
        exitProgram();              // memanggil void exitProgram dan supaya mengakhiri program
    }
}

void login(){       // void login
    string username, password;
    int sensor;
    char ulangi;
    do{
        password.clear();       // agar mengosongkan password yang sebelumnya diinput
        cout << string(32,'=') << endl;
        cout << setw(0) << left << '|' << setw(20) << right << "Login Akun" << setw(11) << right << "|" << endl;
        cout << string(32,'=') << endl;
        cout << "Username : ";
        cin >> username;
        cout << "Password : ";
        while (true) {
            sensor = getch();
            if(sensor == 13){       // ketika enter berarti selesai input password nya
                break;
            }else if(sensor == 8){      // ketika menekan backspace, maka menghapus karakter sebelumnya
                if(!password.empty()){
                    password.pop_back();       
                    cout << "\b \b";           
                }
            }else{           
                password.push_back(sensor);     // menambahkan karakter saat input password
                cout << '*';                    // mengganti karakter tersebut menjadi simbol *
            }
        }
        cout << endl;
        
        if(username == "rihal" && password == "123240181"){     // username dan password yang benar
            cout << "Login Berhasil" << endl;
            break;
        }else{
            cout << "Username dan Password yang anda masukkan SALAH" << endl;
            cout << "Apakah anda ingin mengulangi login? (y/n) : ";
            cin >> ulangi;
            loading();
        }
    }while(ulangi == 'y');      // lopping ketika user salah input username dan password dan kembali ke login
    while(ulangi == 'n'){
        exitProgram();
    }
    loading();
}

void menu(){        // void menu
    cout << string(32,'=') << endl;
    cout << setw(0) << left << '|' << setw(25) << right << "Kalkulator Sederhana" << setw(6) << right << "|" << endl;
    cout << string(32,'=') << endl;
    cout << "Riwayat (Ans) = " << riwayat << " " << operasi.str() << endl;  // memaggil riwayat dan cara memanggil stringstream

    cout << "Menu : " << endl;
    cout << "1. Pembagian" << endl;
    cout << "2. Perkalian" << endl;
    cout << "3. Pengurangan" << endl;
    cout << "4. Penjumlahan" << endl;
    cout << "5. Konversi Tanda (+/-)" << endl;
    cout << "6. Konversi Persen (%)" << endl;
    cout << "0. Keluar" << endl;
    cout << string(32,'=') << endl;
}

float pembagian(float x, float y){          // fungsi pembagian
    float hasilPembagian;
    hasilPembagian = x / y;
    return hasilPembagian ;
}

void perkalian(float &x, float &y){         // fungsi perkalian dan cara menerapkan fungsi pass by reference
    x = x * y;
}

float pengurangan(float x, float y){        // fungsi pengurangan
    float hasilPengurangan;
    hasilPengurangan = x - y;
    return hasilPengurangan;
}

void penjumlahan(float *x, float *y){       // fungsi penjumlahan dan cara menerapkan fungsi pass by address atau pointer
    *x = *x + *y;
}

double konversiTanda(double nilai){         // fungsi konversi tanda +/-
    double konversi;
    konversi = (-nilai);
    return konversi;
}

double konversiPersen(double nilai, double persen){     // fungsi konversi persen
    double konversi;
    konversi = nilai * (persen / 100);
    return konversi;
}

void exitProgram(){                         // void untuk exitProgram
    cout << string(50,'=') << endl;
    cout << "Terima kasih telah menggunakan kalkulator ini :) " << endl;
    cout << "Salam :v " << endl;
    cout << string(50,'=') << endl;
    exit(0);        // untuk menghentikan program
}

void loading(){
    char x = 46;                    // kode ascii untuk simbol .
    cout << "loading";
    for(int i = 0; i < 5; i++){     // membuat titik yang dihasilkan sampai 5
        cout << x;
        if(i < 20){
            Sleep(100);             // lama jeda
        }
        if(i > 10 && i < 20){
            Sleep(150);             // lama jeda
        }
        if(i > 10){
            Sleep(100);             // lama jeda
        }
    }
    cout << "\033c";                // untuk mehilangkan baris di atasnya
}