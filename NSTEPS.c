#include <stdio.h>
#include <string.h>
int main(void) {
	int test, x, y;
	scanf("%d", &test);
	while(test--){
		scanf("%d%d", &x, &y);
		if(x-y==2 || x-y==0){
			if(x%2==0)
				printf("%d\n", x+y);
			else
				printf("%d\n", x+y-1);
		}
		else
			printf("No Number\n");
	}
	return 0;
}
