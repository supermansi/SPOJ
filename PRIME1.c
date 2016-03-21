#include<stdio.h>

int arr[10000001] = {0};

int main(){	
	int i, test, a, b, j;
	arr[0]=arr[1]=1;
	for(i=2; i*i<1000000001; i++){
		if(arr[i]==0){
			for(j=i*2; j<1000000001; j+=i){
				arr[j]=1;
			}	
		}
	}
	scanf("%d", &test);
	while(test--){
		scanf("%d%d", &a, &b);
		for(i=a; i<=b; i++){
			if(arr[i]==0){
				printf("%d\n", i);
			}
		}
		printf("\n");
	}/*
	for(i=0; i<11; i++)
		if(arr[i]==0)
			printf("%d ", i);**/
	return 0;
}
