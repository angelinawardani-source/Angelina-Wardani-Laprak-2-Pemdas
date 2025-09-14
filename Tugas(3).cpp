#include <iostream>
using namespace std;

int main (){
	int jam_kerja, upah = 0, denda = 0, lembur = 0, total = 0;
	
	cout << "Jam kerja : ";
	cin >> jam_kerja;
	
	if(jam_kerja < 50){
		denda = ((50 - jam_kerja)*1000);
		upah  = (jam_kerja * 5000);
	}else if(jam_kerja >= 50 && jam_kerja <= 60){
		upah = (jam_kerja * 5000);
	}else{
		lembur = ((jam_kerja - 60) * 6000);
		upah = 60 * 5000;
	}
	total = upah + lembur - denda;
	
	cout << "Upah = " << "Rp. " << upah << endl;
	cout << "Lembur = " << "Rp. " << lembur << endl;
	cout << "Denda = " << "Rp. " << denda << endl;
	cout << "---------------------------------" << endl;
	cout << "Total = " << "Rp. " << total;
	
	return 0;
}
