#include <iostream>
using namespace std;

int main() 
{
	char ulang;
		
		awal:
			
		cout << "program perulangan menggunakan go to" << endl;
		cout << endl;
		cout << "ingin mengulang perintah (y/t)? ";
		cin >> ulang;
		cout << endl;
		
		if (ulang == 'Y' || ulang == 'y' ) {
			goto awal;
		}
		if (ulang == 'T' || ulang == 't' ) {
			goto akhir;
}
	akhir:
		
		cout << "program selesai.";
		
		return 0;
}
		
