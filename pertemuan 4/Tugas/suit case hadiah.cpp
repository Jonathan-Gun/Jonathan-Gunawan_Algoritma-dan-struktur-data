#include <iostream>
using namespace std;

int main()
{
	string nama_siswa;
	int nilai_a, nilai_b, nilai_c;
	cout<< "program hitung nilai rata rata" <<endl;
	cout<< "nama siswa : ";
	getline(cin,nama_siswa);
	cout<< "Nilai pertandingan 1 = ";
	cin>> nilai_a;
	cout<< "Nilai pertandingan 2 = ";
	cin>> nilai_b;
	cout<< "Nilai pertandingan 3 = ";
	cin>> nilai_c;
	
	int total = (nilai_a + nilai_b + nilai_c)/3;
	cout<< "siswa yang bernama "<<nama_siswa<<endl;
	cout<< "Memperoleh nilai rata-rata "<<total<<" dari hasil perlombaan diikutinya "<<endl;
	
	switch(total)
	{
		case 85 ... 100:
			
			cout<<"maka mendapat hadiah komputer core i5";
		
		break;
		
		case 70 ... 84:
		
			cout<<"maka mendapat hadiah uang sebesar Rp2.500.000";
		
		break;
		
		default:
		
			cout<<"maka mendapat hadiah hiburan";
			
		break;
	}
	
	getchar ();
}
