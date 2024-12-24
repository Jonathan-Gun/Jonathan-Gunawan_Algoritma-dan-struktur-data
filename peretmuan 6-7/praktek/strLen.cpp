#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char huruf[20];
	char pindah[20];
	//clrscr();
	
	cout << "masukkan sembarang kata = ";
	cin >> huruf;
	
	cout<<"panjang kata yang diinputkan = ";
	cout<<strlen(huruf);
	
	getchar();
}
