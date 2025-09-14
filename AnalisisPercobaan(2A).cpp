#include <iostream>
#include <string>
using namespace std;

int main (){
	int x = 5;
	x == 5 ? cout << "Benar\n" : cout << "Salah\n";
	
	string nama_benar = "Angelina Wardani";
	string nim_benar = "255150301111031";
	string nama, nim;
	
	cout << "Masukkan nama : ";
	getline(cin,nama);
	cout << endl;
	cout << "Masukkan nim : ";
	getline(cin,nim);
	
	if(nama == nama_benar && nim == nim_benar){
		cout << "Nama : " << nama << endl << "Nim : " << nim << endl;
	}else if(nama != nama_benar && nim == nim_benar){
		cout << "Input nama salah" << endl;
	}else if(nama == nama_benar && nim != nim_benar){
		cout << "Input nim salah" << endl;
	}else {
		cout << "Input nama dan nim salah" << endl;
	}
	
	return 0;
}
