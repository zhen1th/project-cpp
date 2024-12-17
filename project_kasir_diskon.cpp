#include <iostream>
using namespace std;

int main()
{
    cout << "=============================================" << endl;
    cout << "Selamat Datang di Program Diskon Toko Bu Susi" << endl;
    cout << "=============================================" << endl;

    float total, diskon, minimum;
    string odiskon, odiskonm;
    char member;
    

    cout << "Silahkan masukkan total belanja anda : Rp";
    cin >> total;
    cout << "Apakah anda sudah menjadi member di Toko Bu Susi? (y/n)";
    cin >> member;

    switch (member){
        case 'y':
            odiskonm = "5%";
            if (total >= 0; total <= 99999){
                odiskon = "-";
                minimum = 0;
                diskon = total;
                diskon = diskon - ((0.05) * diskon);
            }else if (total >= 100000; total <= 199999){
                odiskon = "5%";
                minimum = 0.05;
                diskon = diskon - ((0.05 + 0.05)) * diskon;
            }else if (total >= 200000; total <= 299999){
                odiskon = "10%";
                minimum = 0.10;
                diskon = diskon - ((0.05 + 0.05)) * diskon;
            }else if (total >= 300000; total <= 399999){
                odiskon = "15%";
                minimum = 0.15;
                diskon = diskon - ((0.05 + 0.05)) * diskon;
            }else if (total >= 400000){
                odiskon = "20%";
                minimum = 0.20;
                diskon = diskon - ((0.05 + 0.05) * diskon);
            
            }
        break;
    }
    cout << endl;

    cout << "Total belanja anda adalah : Rp" << total << endl;
    cout << "Diskon minimum belanja    : " << odiskon << endl;
    cout << "Diskon member             : " << odiskonm << endl;
    cout << "Total setelah diskon      : Rp" << diskon << endl;


}