#include <stdio.h>
int main()
{
    long long int n;
	scanf("%lld", &n);
	if(n&(n-1))
	    printf("NIE");
	else
	    printf("TAK")    ;
}