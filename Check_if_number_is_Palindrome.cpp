// A recursive C++ program to check
// whether a given number
// is palindrome or not
#include <iostream>
using namespace std;

// A function that returns true only
// if num contains one
// digit
int oneDigit(int num)
{
	
	// Comparison operation is faster
	// than division
	// operation. So using following
	// instead of "return num
	// / 10 == 0;"
	return (num >= 0 && num < 10);
}

// A recursive function to find
// out whether num is
// palindrome or not. Initially, dupNum
// contains address of
// a copy of num.
bool isPalUtil(int num, int* dupNum)
{
	
	// Base case (needed for recursion
	// termination): This
	// statement mainly compares the
	// first digit with the
	// last digit
	if (oneDigit(num))
		return (num == (*dupNum) % 10);
	if (!isPalUtil(num / 10, dupNum))
		return false;


	*dupNum /= 10;


	return (num % 10 == (*dupNum) % 10);
}

int isPal(int num)
{

	if (num < 0)
		num = -num;


	int* dupNum = new int(num);

	return isPalUtil(num, dupNum);
}


int main()
{
	int n = 12321;
	isPal(n) ? cout <<"Yes\n": cout <<"No" << endl;

	n = 12;
	isPal(n) ? cout <<"Yes\n": cout <<"No" << endl;

	n = 88;
	isPal(n) ? cout <<"Yes\n": cout <<"No" << endl;

	n = 8999;
	isPal(n) ? cout <<"Yes\n": cout <<"No";
	return 0;
}

