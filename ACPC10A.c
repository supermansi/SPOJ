#include <stdio.h>
int main(void) {
	int num1, num2, num3;
	scanf("%d%d%d", &num1, &num2, &num3);
	do{
	if(num2-num1==num3-num2){
		printf("AP %d\n", 2*num3-num2);
	}
	else if(num2/num1==num3/num2){
		printf("GP %d\n", num3*num3/num2);
	}
	scanf("%d%d%d", &num1, &num2, &num3);
	if(num1==0 && num2==0 && num3==0)
		break;
	}while(1);
	return 0;
}