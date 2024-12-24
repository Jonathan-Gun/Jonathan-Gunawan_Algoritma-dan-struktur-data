#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char a1{} = "IBIK";
	char a2{} = "IBIK";
	char b1{} = "IBIK";
	//clrscr();
	
	cout<<"hasil perbandingan"<<a1<<" dan "<<a2<<"->";
	
	cout<<strcmp(a1, a2)<<endl; // fungsi membandingkan string 1 dan 2
	
	cout<<"hasil perbandingan "<<a2<<" dan "<<a1<<"->";
	
	cout<<strcmp(a2,a1) <<endl;
	
	cout<<"hasil perbandingan "<<a1<<" dan "<<b1<<"->";
	
	cout<<strcmp(a1,b1) <<endl;
	
	getchar();
}
