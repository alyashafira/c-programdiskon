#include <iostream.h>
#include <conio.h>

int main()
{
cout<< " PROGRAM MENENTUKAN DISKON DAN HADIAH PADA TOKO ABC "<<endl;
cout<< "===================================================="<<endl;
float total_belanja;
float diskon;
float total_bayar;
cout<< " Masukan Total Belanja Anda = ";
cin>>total_belanja;
if (total_belanja > 500000)
 {
 diskon= total_belanja*0.15;
 cout << "SELAMAT ANDA MENDAPATKAN DISKON = "<<diskon<<endl;
 }
 else if (total_belanja > 300000)
 {
 diskon = total_belanja*0.10;
 cout << " SELAMAT ANDA MENDAPATKAN DISKON = "<<diskon<<endl;
 }
 else if (total_belanja > 250000)
 {
 diskon= total_belanja*0.05;
 cout << " SELAMAT ANDA MENDAPATKAN DISKON = "<<diskon<<endl;
 }
 else if (total_belanja >= 200000)
 {
 cout << " SELAMAT ANDA MENDAPATKAN PAYUNG CANTIK " <<endl;
 }
 else if (total_belanja >=100000)
 {
 cout << " SELAMAT ANDA MENDAPATKAN HADIAH PIRING CANTIK " <<endl;
 }
 else (total_belanja);
 {
 total_bayar = total_belanja-diskon;
 cout << " Total Yang Harus Dibayar = "<<total_bayar<<endl;
 }
getch();
}




