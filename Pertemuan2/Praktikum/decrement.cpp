int main 
{
	int a = 5;
	
	// post-increment (a--): variabel 'a' digunakan dulu, baru dikurangi 1
	int b = a++; // b = 5, a = 4
	
	cout << "post-decrement:" << endl;
	cout << "nilai a setelah a--! " << endl; // a sekarang 4
	cout << "nilai b: " << endl; // b mengambil nilai sebelum a dikurangi, jadi b = 5
	
	int c = 5;
	
	// pre-decrement (--c): variabel 'c' dikurangi dulu baru digunakan 
	int d = --c; // c = 4, d = 4
	
	cout << "\npre-decrement:" << endl;
	cout << "nilai c setelah --c: " << c << endl; // c sekarang 4
	cout << "nilai d: " << d << endl; // d mengambil nilai setelah a dikurangi, jadi d = 4
	
	return 0;
}
