#include <iostream>
using namespace std;

int main(){
	
	int Harga_Pokok,Jumlah_Cicilan,Jangka_Waktu,Bunga,Keuntungan_Penjual,Harga_Motor,Total_Pengeluaran;
	
	cout<<"\tMenghitung Cicilan Pembelian Sepeda Motor"<<endl;
	
	cout<<"Harga Motor : Rp. ";cin>>Harga_Motor;
	cout<<"Jangka Waktu Cicilan (Bulan) : ";cin>>Jangka_Waktu;

	cout<<"Rincian Biaya dan Keuntungan"<<endl;
	
	Harga_Pokok=Harga_Motor/Jangka_Waktu;
	Bunga=Harga_Pokok*0.1;
	Jumlah_Cicilan=Harga_Pokok+Bunga;
	Total_Pengeluaran=Jumlah_Cicilan*Jangka_Waktu;
	Keuntungan_Penjual=Total_Pengeluaran-Harga_Motor;
	
	cout<<"\nCicilan Perbulan : Rp. "<<Jumlah_Cicilan;
	
	cout<<"\nTotal Pengeluaran : Rp. "<<Total_Pengeluaran;

	cout<<"\nKeuntungan Penjual : Rp. "<<Keuntungan_Penjual;

	return 0;
}


