#include <iostream>
using namespace std;

int main (){
	float IMT, b, t;
	
	cout << "Berat badan (kg) : ";
	cin >> b;
	cout << "Tinggi badan (m) : ";
	cin >> t;
	
	cout << endl;
	
	IMT = b/(t*t);
	cout << "IMT : " << IMT;
	
	if(IMT <= 18.5){
		cout << " Termasuk kurus" << endl;
	}else if(18.5 < IMT <=  25){
		cout << " Termasuk normal" << endl;
	}else if(25 < IMT <= 30){
		cout << " Termasuk gemuk" << endl;
	}else{
		cout << " Termasuk kegemukan" << endl;
	}
	
	return 0;
}
