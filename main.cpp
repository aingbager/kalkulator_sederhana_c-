#include <iostream>
#include <string>
using namespace std;

class Perhitungan{
public:
	int angka1;
	int angka2;

	Perhitungan(int ang1,int ang2){
		this->angka1 = ang1;
		this->angka2 = ang2;
	}
	void kali(){
		cout << "hasilnya: ";
		cout << angka1*angka2 << endl;
	}

	void bagi(){
		cout << "hasilnya: ";
		cout << angka1/angka2 << endl;
	}

	void tambah(){
		cout << "hasilnya: ";
		cout << angka1+angka2 << endl;
	}

	void kurang(){
		cout << "hasilnya: ";
		cout << angka1-angka2 << endl;
	}
};
int main(){
	char lanjut;
	int a,b,c;

	atas:
	cout << "masukan angka pertama: ";
	cin >> a;
	cout << "masukan angka kedua: ";
	cin >> b;

	Perhitungan* user = new Perhitungan(a,b);

	cout << endl;
	cout << "pilih operasi:" << endl;
	cout << "1 .perkalian\t";
	cout << "2 .pembagian\t";
	cout << "3 .penjumlahan\t";
	cout << "4 .pengurangan\t\n" << endl;

	cout << "pilih[1-5]: ";
	cin >> c;

	switch(c){
		case 1:
		user->kali();
		break;
		case 2:
		user->bagi();
		break;
		case 3:
		user->tambah();
		break;
		case 4:
		user->kurang();
		break;
	}
	cout << "lanjut y/n: ";
	cin >> lanjut;
	if(lanjut == 'y'){
		goto atas;
	}
	else if(lanjut == 'n'){
		cout << "program selesai!!!" << endl;
	}

	else{
		cout << "inputan salah!!!!!" << endl;
		cout << "program selesai" << endl;
	}

	
	return 0;
}
