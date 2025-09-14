#include <iostream>
#include <cmath>
using namespace std;

int main (){
	int pilihan;
	float a, b, r, luas, keliling;
	
	cout << "Menu : " << endl;
	cout << "1. Menghitung luas dan keliling persegi panjang" << endl;
	cout << "2. Menghitung luas dan keliling lingkaran" << endl;
	cout << "3. Menghitung luas dan keliling segitiga" << endl;
	
	cout << "Pilihan anda : ";
	cin >> pilihan;
	
	
	switch(pilihan){
		case 1 :
			cout <<  "Masukkan panjang (a) : ";
			cin >> a;
			cout << "Masukkan lebar (b) : ";
			cin >> b;
			
			luas = a * b;
			cout << "Luas : " << luas << " cm2" << endl;
			keliling = 2 * (a + b);
			cout << "Keliling : " << keliling << " cm" << endl;
			break;
		case 2 :	
			cout << "Masukkan jari-jari (r) : ";
			cin >> r;
			
			luas = 3.14 * r * r;
			cout << "Luas : " << luas << " cm2" << endl;
			keliling = 2 * 3.14 * r;
			cout << "Keliling : " << keliling << " cm" << endl;
			break;
		case 3 :	
			cout << "Masukkan sisi a : ";
			cin >> a;
			cout << "Masukkan sisi b : ";
			cin >> b;
			cout << "Masukkan sisi c : ";
			cin >> r;
			
			keliling = a + b + r;
			cout << "Keliling : " << keliling << " cm" << endl;
			float s;
			s = keliling/2;
			luas = sqrt(s * (s - a) * (s - b) * (s - r));
			cout << "Luas : " << luas << " cm2" << endl;
			break;
		default : 
			cout << "Pilihan anda : " << pilihan << endl;	
			cout << "Data tidak ditemukan, program dihentikan..." << endl;				
	}
	
return 0;
}
