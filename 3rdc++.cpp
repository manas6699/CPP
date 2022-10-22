#include<iostream>
using namespace std;
//the are two types of header file(#include<iostream>)
//1)system header file
//2)user define header file
int main()
{
	//cout<<"hello world."<<endl;
	int a,b;
	cout<<"enter the vlue of a : ";
	cin>>a;
	cout<<"enter the value of b : ";
	cin>>b;
	cout<<"--------------------------------------------------------";
	cout<<"\n*********  the value of a and b is = "<<a<<" and "<<b<<"  *********"<<endl;
	cout<<"--------------------------------------------------------";
	cout<<"\narithmetic operator"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"the sum of a and b is = "<<a+b<<endl;
	cout<<"the substraction of a and b is = "<<a-b<<endl;
	cout<<"the multiplication of a and b is = "<<a*b<<endl;
	cout<<"the devision of a and b is = "<<a/b<<endl;
	cout<<"the reminder of a and b is = "<<a%b<<endl;
	cout<<"\ncomparison operator"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"a==b = ? "<<(a==b)<<endl;
	cout<<"a!=b = ? "<<(a!=b)<<endl;
	cout<<"a>b = ? "<<(a>b)<<endl;
	cout<<"a<b = ? "<<(a<b)<<endl;
	cout<<"a>=b = ? "<<(a>=b)<<endl;
	cout<<"a<=b = ? "<<(a<=b)<<endl;
	cout<<"\nlogical operator"<<endl;
	cout<<"----------------"<<endl;
	cout<<"the value of ((a==b) && (a>b)) this operator "<<((a==b) && (a>b))<<endl;
	cout<<"the value of ((a==b) || (a>b)) this operator "<<((a==b) || (a>b))<<endl;
	cout<<"the value of (!(a>b) this operator "<<(!(a>b))<<endl;
	return 0;
}
