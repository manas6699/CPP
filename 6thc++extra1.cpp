#include<iostream>
using namespace std;
int main ()
{
	cout<<"Switch case"<<endl;
	cout<<"------------";
	int age;
	cout<<"enter your age : "<<endl;
	cin>>age;
	switch(age){
		case 2:
			cout<<"your age is 2 years.";
			break;
			
		case 18:
			cout<<"your age is 18 years.";
			
		case 22:
			cout<<"your age is 22 years.";
			
		default :
			cout<<"no special cases.";
			
		return 0;
	}
}
