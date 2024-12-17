#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    
    int makanan, porsi_makanan, minuman, porsi_minuman, harga_makanan,
    harga_minuman, harga_porsi_makanan, harga_porsi_minuman,
    harga_awal, harga_stlh_diskon, total_diskon, total_pajak, total_bayar;
    char ulang;

    do{
        cout << string(48,'=') << endl;
        cout<< "SELAMAT DATANG DI PROGRAM KASIR RESTORAN ORCHID" << endl;
        cout << string(48,'=')  << endl;

        cout << "-------------------" << endl;
        cout << "Daftar Menu Makanan" << endl;
        cout << "-------------------" << endl;
        cout << "1. Nasi Goreng (Rp 30.000)" << endl;
        cout << "2. Ayam Bakar (Rp 45.000)" << endl;
        cout << "3. Sate Ayam (Rp 50.000)" << endl;
        cout << "Silahkan pilih makanan yang akan dipesan (1/2/3) : ";
        cin >> makanan;
        cout << "Masukkan porsi yang diinginkan : ";
        cin >> porsi_makanan;

        switch (makanan){
            case 1:
                harga_makanan = 30000;
                harga_porsi_makanan = porsi_makanan * harga_makanan;
                break;
            case 2:
                harga_makanan = 45000;
                harga_porsi_makanan = porsi_makanan * harga_makanan;
                break;
            case 3:
                harga_makanan = 50000;
                harga_porsi_makanan = porsi_makanan * harga_makanan;
                break;
            default:
                cout << "Pesanan tidak valid. Otomatis default ke menu nasi goreng" << endl;
                harga_makanan = 30000;
                harga_porsi_makanan = porsi_makanan * harga_makanan;
        }
        cout << "-------------------" << endl;
        cout << "Daftar Menu Minuman" << endl;
        cout << "-------------------" << endl;
        cout << "1. Es Teh (Rp 10.000)" << endl;
        cout << "2. Jus Jeruk (Rp 15.000)" << endl;
        cout << "3. Kopi (Rp 20.000)" << endl;
        cout << "Silahkan pilih minuman yang akan dipesan (1/2/3) : ";
        cin >> minuman;
        cout << "Masukkan porsi yang diinginkan : ";
        cin >> porsi_minuman;

        switch (minuman){
            case 1:
                harga_minuman = 10000;
                harga_porsi_minuman = porsi_minuman * harga_minuman;
                break;
            case 2:
                harga_minuman = 15000;
                harga_porsi_minuman = porsi_minuman * harga_minuman;
                break;
            case 3:
                harga_minuman = 20000;
                harga_porsi_minuman = porsi_minuman * harga_minuman;
                break;
            default:
                cout << "Pesanan tidak valid. Otomatis default ke menu es teh manis" << endl;
                harga_minuman = 10000;
                harga_porsi_minuman = porsi_minuman * harga_minuman;
        }

        harga_awal = harga_porsi_makanan + harga_porsi_minuman;

        if (harga_awal >= 100000 && harga_awal <= 199999){
            total_diskon = 0.10 * harga_awal;
            harga_stlh_diskon = harga_awal - total_diskon;
        }else if(harga_awal >= 200000){
            total_diskon = 0.15 * harga_awal;
            harga_stlh_diskon = harga_awal - total_diskon;
        }else{
            total_diskon = 0;
            harga_stlh_diskon = harga_awal;
        }

        total_pajak = 0.10 * harga_stlh_diskon;
        total_bayar = harga_stlh_diskon + total_pajak;

        cout << string(45,'=') << endl;
        cout << "Item                         Total (Rp)" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Makanan                      " << harga_porsi_makanan << endl;
        cout << "Minuman                      " << harga_porsi_minuman << endl;
        cout << "Diskon                       " << total_diskon << endl;
        cout << "Pajak PPN (10%)              " << total_pajak << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Total Pajak                  " << total_bayar << endl;
        cout << "================================================" << endl;
        
        cout << "Apakah anda ingin memesan lagi? (y/n) : ";
        cin >> ulang;
        cout << endl;
    } while(ulang == 'y');
    cout << "Terimakasih telah memesan di Restoran Orchid" << endl;
}