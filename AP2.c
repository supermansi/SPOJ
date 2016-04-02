#include <stdio.h>
int main(void){
	long long int t, tl, s, n, d, a, i, test;
	scanf("%lld", &test);
	while(test--){
		scanf("%lld%lld%lld", &t, &tl, &s);
		n=(s*2)/(t+tl);
		d=(tl-t)/(n-5);
		a=t-2*d;
		printf("%lld\n", n);
		for(i=0; i<n; i++){
			printf("%lld ", a);
			a+=d;
		}
		printf("\n");
	}
	return 0;
}
