#Time: 0.22s
#include <stdio.h>


int main(void){

    int n, i, j, total=0;

	scanf("%d", &n);

	for(i=1; i<=n; i++){

	    for(j=1; j<=n; j++){

	        if(i*j <= n && j<=i)
	            			total++;

	    }

	}
		printf("%d", total);

	return 0;

}
