#include <iostream>
using namespace std;
int main()
{
	int number;
	cin >> number;
	while(number!=42)
	{
		cout << number << "\n" ;
		cin >> number;
	}
	return 0;
}