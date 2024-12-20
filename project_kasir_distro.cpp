#include <iostream>
using namespace std;

string barang[] = {"Kaos", "Jaket", "Topi", "Hoodie", "Celana"};
int harga[] = {100000, 200000, 80000, 150000, 120000};
int stok[] = {50, 30, 20, 15, 25};
int pesanan[5] = {0, 0, 0, 0, 0};

void tampilkanMenu() {
    cout << "--- Menu Toko Distro ---\n";
    cout << "1. Memesan Barang\n";
    cout << "2. Pembatalan Pemesanan\n";
    cout << "3. Pembayaran\n";
    cout << "4. Cek Stok Barang\n";
    cout << "5. Keluar Program\n";
    cout << "Pilih menu: ";
}

void pesanBarang() {
    int pilihan, jumlah;
    cout << "Daftar Barang:\n";
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << barang[i] << " - Stok: " << stok[i] << " - Harga: Rp" << harga[i] << "\n";
    }
    cout << "Pilih nomor barang yang ingin dipesan: ";
    cin >> pilihan;
    cout << "Masukkan jumlah yang ingin dipesan: ";
    cin >> jumlah;
    
    if (pilihan > 0 && pilihan <= 5 && stok[pilihan - 1] >= jumlah) {
        stok[pilihan - 1] -= jumlah;
        pesanan[pilihan - 1] += jumlah;
        cout << jumlah << " " << barang[pilihan - 1] << " berhasil dipesan.\n";
    } else {
        cout << "Stok tidak mencukupi atau pilihan tidak valid.\n";
    }
}

void batalkanPesanan() {
    int pilihan, jumlah;
    cout << "Pilih nomor barang yang ingin dibatalkan: ";
    cin >> pilihan;
    cout << "Masukkan jumlah yang ingin dibatalkan: ";
    cin >> jumlah;
    
    if (pilihan > 0 && pilihan <= 5 && pesanan[pilihan - 1] >= jumlah) {
        stok[pilihan - 1] += jumlah;
        pesanan[pilihan - 1] -= jumlah;
        cout << jumlah << " " << barang[pilihan - 1] << " berhasil dibatalkan.\n";
    } else {
        cout << "Pesanan tidak valid untuk dibatalkan.\n";
    }
}

void pembayaran() {
    int total = 0;
    cout << "Rincian Pembayaran:\n";
    for (int i = 0; i < 5; i++) {
        if (pesanan[i] > 0) {
            cout << barang[i] << " x " << pesanan[i] << " = Rp" << harga[i] * pesanan[i] << "\n";
            total += harga[i] * pesanan[i];
            pesanan[i] = 0; 
        }
    }
    cout << "Total yang harus dibayar: Rp" << total << "\n";
    cout << "Pembayaran selesai.\n";
}

void cekStok() {
    cout << "Cek Stok Barang:\n";
    for (int i = 0; i < 5; i++) {
        cout << barang[i] << " - Stok: " << stok[i] << "\n";
    }
}

int main() {
    cout << "hai";
    char kembaliMenu;
    int pilihan;
    do {
        tampilkanMenu();
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                pesanBarang();
                cin >> kembaliMenu;
                break;
            case 2:
                batalkanPesanan();
                cin >> kembaliMenu;
                break;
            case 3:
                pembayaran();
                cin >> kembaliMenu;
                break;
            case 4:
                cekStok();
                cin >> kembaliMenu;
                break;
            case 5:
                cout << "Keluar dari program.\n";
                exit(0);
            default:
                cout << "Pilihan tidak valid.\n";
        }
        cout << "\n";
    } while (kembaliMenu == 'y');
    
    return 0;
}
