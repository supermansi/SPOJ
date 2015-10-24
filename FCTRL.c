#include <stdio.h>
#include <math.h>
int main(void) {
    long long int test, n, x, i, ans;
	scanf("%lld", &test);
	while(test--){
	    scanf("%lld", &n);
	    ans=0;
	    i=1;
	    x=pow(5,i++);
	    while(x<=n){
	        ans+=n/x;
	        //printf("%d\t%d\n", x, ans);
	        x=pow(5,i++);
	    }
	    printf("%lld\n", ans);
	}
	return 0;
}

