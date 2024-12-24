#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x, y, z;
	
	cout << "masukan Npm anda:";
	cin >> x;
	cin.ignore();
	cout << "masukan nama anda:";
	getline(cin, y);
	cout << "masukan alamat anda:";
	getline(cin,z);
	
	cout << endl;
	cout << "NPM anda adalah:" << x << endl;
	cout << "Nama anda adalah:" << y << endl;
	cout << "Alamat anda adalah:" << z;
	
	return 0;
}
