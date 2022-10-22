#include<iostream>
using namespace std;
int main()
{
	//else-if ladder
	cout<<"else-if lader"<<endl;
	cout<<"------------------"<<endl;
	int age;
	cout<<"\ntell me your age"<<endl;
	cin>>age;
	if(age<18)
	{
		cout<<"you cannot came to party."<<endl;
	}
	else if(age==18)
	{
		cout<<"youe have a kids pass."<<endl;
	}
	else
	{
		cout<<"you can come to my party.";
	}
	return 0;
}
