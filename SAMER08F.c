#include <stdio.h>

int main(void) {
	int x, i, ans;
	do{
		scanf("%d", &x);
		i=0; ans=0;
		if(x==0)
			break;
		while(i<x){
			ans+=(x-i)*(x-i);
			i++;
		}
		printf("%d\n", ans);
	}while(1);
	return 0;
}
