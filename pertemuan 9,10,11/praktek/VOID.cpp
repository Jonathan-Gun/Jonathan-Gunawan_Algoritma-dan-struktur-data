#include <iostream>
using namespace std;

void siswa()
{
	string nama = "Anton";
	string jk = "laki - laki";
	cout << nama << " adalah seorang " << jk << endl;
}

string siswi ()
{
	string nama = "Tina";
	string jk = "perempuan";
	return (nama + " adalah seorang " + jk);
}

int main ()
{
	siswa(); //fungsi void tidak memerlukan 'cout'
	cout<< siswi() << endl; //fungsi non-void mengembalikan nilai, maka butuh 'cout'
}
