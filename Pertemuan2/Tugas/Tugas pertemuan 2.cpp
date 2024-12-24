 #include<iostream>
using namespace std;
int main()
{
	int y, z;
	cout << "Nomor 1- penjumlahan" << endl;
	cout << "Masukan 2 angka" << endl;
	cout << "Angka pertama: ";
	cin >> y;
	cout << "angka kedua: ";
	cin >> z;
	
	int Hasil_tambah = y + z;
	cout << "Hasilnya adalah =" << Hasil_tambah << endl;
	cout << endl;
	
	cout << "Nomor 2- perkalian" << endl;
	cout << "Masukan 2 angka" << endl;
	cout << "Angka pertama: ";
	cin >> y;
	cout << "angka kedua: ";
	cin >> z;
	
	int Hasil_kali = y * z;
	cout << "Hasilnya adalah =" << Hasil_kali << endl;
	cout << endl;
	
		cout << "Nomor 3- pembagian" << endl;
	cout << "Masukan 2 angka" << endl;
	cout << "Angka pertama: ";
	cin >> y;
	cout << "angka kedua: ";
	cin >> z;
	
	int Hasil_bagi = y / z;
	cout << "Hasilnya adalah =" << Hasil_bagi << endl;
	cout << endl;
	
	return 0;
}

