#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int alas,tinggi,sisi_miring,keliling;
	
	cout << "Menghitung Sisi Miring dan Keliling Segitiga Siku-Siku\n";
	cout << "Masukkan alas segitiga = ";
	cin >> alas;
	cout << "Masukkan tinggi segitiga = ";
	cin >> tinggi;
	
	sisi_miring=sqrt(alas*alas+tinggi*tinggi);
	cout << "\nSisi Miring = "<< sisi_miring;
	
	keliling=alas+tinggi+sisi_miring;
	cout<< "\nKeliling = "<< keliling;
	
	
	return 0;
}
