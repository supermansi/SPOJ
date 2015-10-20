#include<stdio.h>
int reverse(int);
int main()
{
	int n,a,i,sum,b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		sum=reverse(a)+reverse(b);
		printf("%d\n",reverse(sum));
	}
	return 0;
}
int reverse(int m)
{
	int n=0;
	while(m>0)
	{
		n=(n*10)+(m%10);
		m=m/10;
	}
	return n;
}