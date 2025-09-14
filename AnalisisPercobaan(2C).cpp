#include <iostream>
using namespace std;

int main(){
	int nilai;
	
	cout << "Masukkan nilai : ";
	cin >> nilai;
	
	if(nilai * 2 < 50){
		nilai += 10;
	}
	if(nilai <= 20){
		cout << "Filkom" << endl;
		if(nilai % 2 == 1){
			cout << "UB" << endl;
		}else{
			cout << "Brawijaya" << endl;
		}
	}else{
		cout << "PTIIK" << endl;
		if(nilai % 2 == 1){
			cout << "UB" << endl;
		}else{
			cout << "Brawijaya" << endl;
		}
	}
	return 0;
}
