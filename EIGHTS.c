#include<stdio.h>
int main(){
	int test;
	long long int k;
	scanf("%d", &test);
	while(test--){
		scanf("%lld", &k);
		printf("%lld\n", 192+250*(k-1));
	}
}
