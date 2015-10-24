#include <stdio.h>

int main(void) {
    int test, n, k, i, j, temp, a[1000], sum, flag, count;
	scanf("%d", &test);
	count=0;
	while(test--){
	    count++;
	    scanf("%d%d", &n, &k);
	    for(i=0; i<k; i++){
	        scanf("%d", &a[i]);
	    }
	    for(i=0; i<k-1; i++){
	        for(j=0; j<k-1; j++){
	            if(a[j]<a[j+1]){
	                temp=a[j];
	                a[j]=a[j+1];
	                a[j+1]=temp;
	            }
	        }
	    }
	    /**i=0; sum=0;
	    while(i<k && sum<=n){
	        sum+=a[i++];
	        printf("%d\t", sum);
	    }*/
	    sum=0;
	    for(i=0; i<k; i++){
	        sum+=a[i];
	        //printf("%d\t", sum);
	        if(sum>=n){
	            flag=1;
	            break;
	        }
	        else
	            flag=0;
	    }
	    if(flag)
	        printf("Scenario #%d:\n%d\n\n", count,i+1);
	    else
	        printf("Scenario #%d:\nimpossible\n\n", count);
	}
	return 0;
}

