#include <iostream>
using namespace std;

int main(){
	int Nilai_Praktikum,Nilai_Teori,Nilai_Tugas_FinalProject,n_Prak,n_Teo,n_Fin,RataRata;
	
	cout << "Menghitung Nilai Rata-Rata\n";
	
	cout << "Masukkan Nilai Praktikum :";
	cin >> Nilai_Praktikum;
	cout << "Masukkan Nilai Teori :";
	cin >> Nilai_Teori;
	cout << "Masukkan Nilai Tugas FinalProject :";
	cin >> Nilai_Tugas_FinalProject;
	
	n_Prak=0.4*Nilai_Praktikum;
	n_Teo=0.4*Nilai_Teori;
	n_Fin=0.2*Nilai_Tugas_FinalProject;
	RataRata=n_Prak+n_Teo+n_Fin;
	
	cout<< "Rata-rata Mata Kuliah Pemrograman = "<<RataRata<<endl;

}
	
