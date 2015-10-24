#include <stdio.h>
#include <math.h>
int main(void) {
    int n, k, s, i, j, temp, ans, sum, a[1000];
    scanf("%d%d%d", &n, &k, &s);
    for(i=0; i<n; i++){
	scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++){
	for(j=0; j<n-1; j++){
	    if(a[j]<a[j+1]){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	    }
	}
    }
    sum=0; i=0;
    ans=k*s;
    for(i=0; sum<ans && i<=n; i++){
	sum=sum+a[i];
    }
    printf("%d\t%d", i, ans);
    return 0;
}