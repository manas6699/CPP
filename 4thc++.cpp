#include<iostream>
using namespace std;
int c=48;
int main()
{
	/*
	//to acess globle and local veriable
	int a,b;
	cout<<"enter the value of a : ";
	cin>>a;
	cout<<"enter the vlaue of b : ";
	cin>>b;
	int c=a+b;
	cout<<"the value of local c which is the sum of a and b = "<<c<<endl;
	cout<<"the value of globle c = "<<::c<<endl;//:: is used to acess the globle value
	*/
	
	/*
	//concept of sizeof function
	cout<<"\n\nconcept of sizeof operator"<<endl;
	float d=34.4F;
	long double e=34.4L;
	cout<<"the value of d is = "<<d<<endl;
	cout<<"the value of e is = "<<e<<endl;
	cout<<"the size of 34.4 = "<<sizeof(34.4)<<endl;//double type
	cout<<"the size of 34.4 = "<<sizeof(34.4f)<<endl;//float type
	cout<<"the size of 34.4 = "<<sizeof(34.4F)<<endl;//float type
	cout<<"the size of 34.4 = "<<sizeof(34.4l)<<endl;//long type
	cout<<"the size of 34.4 = "<<sizeof(34.4L)<<endl;//long type
	*/
	
	/*
	//reference variable
	cout<<"reference variable"<<endl;
	float x=455;
	float &y=x;
	cout<<"the value of x is"<<x<<endl;
	cout<<"the value of y is "<<y<<endl;
	cout<<"you can see the value of x and y is same."<<endl;
	cout<<"y is the reference variable of x,"<<endl;
	*/
	
	/*
	//typecasting 
	int p=45;
	float q=15.56;
	cout<<"the value of s after typecasting of p from int to float "<<(float)p<<endl;
	cout<<"the value of q after typecasting the vaue of q from float to int "<<(int)q<<endl;
	cout<<"the value of s after typecasting of p from int to float "<<float(p)<<endl;
	cout<<"the value of q after typecasting the vaue of q from float to int "<<int(q)<<endl;
	*/
	
	return 0;
}
