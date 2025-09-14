#include <iostream>
using namespace std;

int main (){
	string nama, password;
	string input_nama, input_password;
	
	cout << "Nama : ";
	getline(cin,nama);
	cout << "Password : ";
	getline(cin,password);
	
	cout << "--LOGIN--" << endl;
	cout << "Masukkan nama : ";
	getline(cin,input_nama);
	cout << "Masukkan password : ";
	getline(cin,input_password);
	
	if(input_nama == nama && input_password == password){
		cout << "Nama : " << nama << endl;
		cout << "Nim : " << "123456" << endl;
		cout << "Prodi : " << "Teknik Komputer" << endl;
	}else {
		cout << "Data tidak ditemukan" << endl;
	}
	
	return 0;
}
