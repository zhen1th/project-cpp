#include <iostream>
#include <iomanip>
using namespace std;

int banyakData = 0;
int jumlahHarga = 0;
string namaGame[100];
int stokGame[100];
int hargaGame[100];

void menu1(){
    int inputData;
    char konfirmasiData;

    do{
        cout << "\033c";  
        cout << "| | MENU INPUT DATA GAME | |" << endl;
        cout << "Masukkan Banyak Data: ";
        cin >> inputData;
        cin.ignore();
        cout << endl;

        for(int i = 0; i < inputData; i++){
            cout << "Data Game #" << (i + 1) << endl;
            cout << "Nama Game  : ";
            getline(cin, namaGame[banyakData]);
            cout << "Stok Game  : ";
            cin >> stokGame[banyakData];
            cout << "Harga Game : Rp. ";
            cin >> hargaGame[banyakData];
            cin.ignore();
            banyakData++;
            cout << endl;
        }

        cout << endl;
        cout << "Apakah data yang Anda masukkan sudah benar? (y/t): ";
        cin >> konfirmasiData;
        cin.ignore();
 
        if(konfirmasiData == 'y'){
            cout << "\033c";  
            for(int i = 0; i < banyakData; i++){
                cout<<setfill('-')<<setw(13) << "" <<"Game ke" << (i+1) << setw(14) << "-" << endl;
                cout << setw(35) << "-" << endl;
                cout << "Nama Game  : " << namaGame[i] << endl;
                cout << "Stok Game  : " << stokGame[i] << endl;
                cout << "Harga Game : Rp. " << hargaGame[i] << endl;
            }
            cout << "[Data Game Telah Ditambahkan]" << endl << endl;
        }else{ 
            banyakData -= inputData;
            cout << "[Data Game Gagal Ditambahkan]" << endl << endl;
        }
    }while(konfirmasiData != 'y');
}

void menu2(){
    cout << "\033c"; 
    if(banyakData == 0){
        cout << "Anda belum memasukkan data game" << endl;
        cout << "Silahkan masuk ke menu 1 terlebih dahulu" << endl;
    }else{
        cout << "| | DATA STOK GAME | |" << endl;
        cout << left << setw(5) << "No" << setw(20) << "Nama Game" << setw(20) << "Harga Game (Rupiah)" << setw(10) << "Jumlah Stok" << endl;

        for (int i = 0; i < banyakData; i++){
            cout << left << setw(5) << (i + 1) << setw(20) << namaGame[i] << setw(20) << hargaGame[i] << setw(10) << stokGame[i] << endl;
            jumlahHarga += (hargaGame[i] * stokGame[i]);
        }
        cout << endl;
        cout << "Jumlah Semua Harga Barang : Rp" << jumlahHarga << endl;
    }
}

int main(){
    int pilihMenu;
    char kembaliMenu;
    
    do{
        cout << "\033c"; 
        cout << string(57, '=') << endl;
        cout << setfill(' ') << setw(11) << "" << "Selamat Datang di HATA GAME CENTER" << setw(11) << " " << endl;
        cout << string(57, '=') << endl << endl;
        cout << setfill(' ') << setw(28) << "" << "MENU" << setw(23) << " " << endl;

        cout << "1. Input Data Game" << endl;
        cout << "2. Cek Data Stok Game" << endl;
        cout << "Silahkan pilih menu : ";
        cin >> pilihMenu;

        switch (pilihMenu) {
            case 1:
                menu1();
                cout << "Kembali ke menu utama? (y/t) : ";
                cin >> kembaliMenu;
                break;
            case 2:
                menu2();
                cout << "Kembali ke menu utama? (y/t) : ";
                cin >> kembaliMenu;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                cout << "Kembali ke menu utama? (y/t) : ";
                cin >> kembaliMenu;
                break;
        }
    }while(kembaliMenu == 'y');
}
