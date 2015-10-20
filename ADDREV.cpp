#include <iostream>
using namespace std;
int reverse(int);
int main()
{
	int test,num1,num2,sum;
	cin >> test;
	for(int i = 0; i<test; i++)
	{
		cin >> num1;
		cin >> num2;
		sum = reverse(num1) + reverse(num2);
		cout << reverse(sum) <<"\n";
	}
	return 0;
}
int reverse(int n)
{
	int d,s=0;
	do
	{
		d=n%10;
		s=s*10+d;
		n=n/10;
	}
	while(n>>0);
	return s;
}