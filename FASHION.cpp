//I used bubble sort. Wonder how it passed :p

#include <stdio.h>
int main(void) {
	int test, sum, men[1000], temp, women[1000], n, j, i;
	scanf("%d", &test);
	while(test--){
		scanf("%d", &n);
		for(i=0; i<n; i++)
			scanf("%d", &men[i]);
		for(i=0; i<n; i++)
			scanf("%d", &women[i]);
		for(i=0; i<n-1; i++){
			for(j=0; j<n-1; j++){
				if(men[j]>men[j+1]){
					temp=men[j];
					men[j]=men[j+1];
					men[j+1]=temp;
				}
				if(women[j]>women[j+1]){
					temp=women[j];
					women[j]=women[j+1];
					women[j+1]=temp;
				}
			}
		}
		sum=0;
		for(i=0; i<n; i++){
			sum+=men[i]*women[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}

