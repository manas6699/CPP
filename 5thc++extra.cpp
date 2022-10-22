#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=1,b=25,c=456,d=1234,e=15425;
	cout<<"using of iomanip header file setw function"<<endl;
	cout<<"manioulor ic c++"<<endl;
	cout<<"\nthe value of a without setw  "<<a<<endl;
	cout<<"the value of b without setw  "<<b<<endl;
	cout<<"the value of c without setw  "<<c<<endl;
	cout<<"the value of d without setw  "<<d<<endl;
	cout<<"\nthe value of a with setw  "<<setw(4)<<a<<endl;
	cout<<"the value of b with setw  "<<setw(4)<<b<<endl;
	cout<<"the value of c with setw  "<<setw(4)<<c<<endl;
	cout<<"the value of d with setw  "<<setw(4)<<d<<endl;
	cout<<"the value of e with setw  "<<setw(4)<<e<<endl;
}
