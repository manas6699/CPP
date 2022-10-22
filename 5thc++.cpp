#include<iostream>
using namespace std;
int main()
{
	cout<<"const keyword is used to fixed a value of a veriable"<<endl;
	const int a=20;
	a=25;//you will geta error because a is a constant
	cout<<"the value of a is "<<a<<endl;
	return 0;
}
