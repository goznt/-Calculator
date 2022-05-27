#include <iostream>
#include <math.h>

using namespace std;
 
void Jumlah();
void Kurang();
void Kali();
void Bagi();
void Pangkat();
void Akarkuadrat();
 
int main(){
     
    int kode;
    char u;
    cout << "===========================================================" << endl;
 q: cout << "|      Ketut Gede Rai Wistika Putra_210030178_BC213       |" << endl;
    cout << "===========================================================" << endl;
    cout << "|                      KALKULATOR                         |" << endl;
    cout << "===========================================================" << endl;
    cout << "|   Pilih Menu Operasi Yang Akan Digunakan :              |" << endl;
    cout << "|                                                         |" << endl;
    cout << "|1. Penjumlahan                                           |" << endl;
    cout << "|2. Pengurangan                                           |" << endl;
    cout << "|3. Perkalian                                             |" << endl;
    cout << "|4. Pembagian                                             |" << endl;
    cout << "|5. Pangkat                                               |" << endl;
    cout << "|6. Akar Kuadrat                                          |" << endl;
    cout << "===========================================================" << endl;
    cout << "	 Menu Yang Anda Pilih  Adalah : ";						
    cin >> kode;
    cout << "===========================================================" << endl;
    switch(kode){
        case 1 :
            Jumlah();
            break;
        case 2 :
            Kurang();
            break;
        case 3 :
            Kali();
            break;
        case 4 :
            Bagi();
            break;
        case 5 :
            Pangkat();
            break;
        case 6 :
            Akarkuadrat();
            break;
            
        default:
		cout<<("Maaf Kode Yang Anda Masukan Salah");
    }
    cout << endl;
    cout << "===========================================================" << endl;
    cout << "\n Apakah Anda Ingin Menginput Ulang ? [Y/T] ? : ";
    cin >> u;
    cout << "===========================================================" << endl;
    cout <<"|                      TERIMA KASIH                       |" << endl;
    cout << "===========================================================" << endl;
    if(u == 'Y' || u == 'y'){
        system("cls");
        goto q;
    } else {
        exit(0);
    }
    return 0;
}
 
void Jumlah(){
    float a,b,hasil;
    cout << "|                      Penjumlahan                        |\n";
    cout << "===========================================================" << endl;
    cout << " Masukkan Bilangan 1 = "; cin >> a;
    cout << " Masukkan Bilangan 2 = "; cin >> b;
    hasil = a+b;
    cout << "===========================================================" << endl;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Kurang(){
    float a,b,hasil;
    cout << "|                      Pengurangan                        |\n";
    cout << "===========================================================" << endl;
    cout << " Masukkan Bilangan 1 = "; cin >> a;
    cout << " Masukkan Bilangan 2 = "; cin >> b;
    hasil = a-b;
    cout << "===========================================================" << endl;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Kali(){
    float a,b,hasil;
    cout << "|                       Perkalian                         |\n";
    cout << "===========================================================" << endl;
    cout << " Masukkan Bilangan 1 = "; cin >> a;
    cout << " Masukkan Bilangan 2 = "; cin >> b;
    hasil = a*b;
    cout << "===========================================================" << endl;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Bagi(){
    float a,b,hasil;
   cout << "|                        Pembagian                         |\n";
    cout << "===========================================================" << endl;
    cout << " Masukkan Bilangan 1 = "; cin >> a;
    cout << " Masukkan Bilangan 2 = "; cin >> b;
    hasil = a/b;
    cout << "===========================================================" << endl;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Pangkat(){
    float bil,pangkat,hasil;
    cout << "|                         Pangkat                         |\n";
    cout << "===========================================================" << endl;
    cout << "\n Masukan bilangan : "; cin  >> bil;
    cout << " Masukkan Pangkat : "; cin >> pangkat;
    hasil = pow(bil,pangkat);
    cout << "===========================================================" << endl;
    cout << " Hasil Penghitungan : " << hasil;
}
 
void Akarkuadrat(){
    float bil,hasil;
    cout << "|                      Akar Kuadrat                       |\n";
    cout << "===========================================================" << endl;
    cout << " Masukkan Bilangan = "; cin >> bil;
    hasil = sqrt(bil);
    cout << "===========================================================" << endl;
    cout << " Hasil Penghitungan : " << hasil;
}

 
