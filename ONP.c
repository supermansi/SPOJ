#include<stdio.h>
#include<string.h>
int top;
void push(char a[],char n){
	a[top]=n;
	top=top+1;
}

void pop(char a[]){
	top=top-1;
	printf("%c", a[top]);
}

int main(){
	int test, i, len;
	char a[401];
	scanf("%d", &test);
	while(test--){
		memset(a, '\0', 401);
		scanf("%s", a);
		len=strlen(a);
		top=0;
		for(i=0; i<len; i++){
			if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='^')
				push(a, a[i]);
			else if(a[i] >= 97 && a[i] <=122)
				printf("%c", a[i]);			
			else if(a[i]!='(')
				pop(a);
		}
		while(top!=0)
			pop(a);
		printf("\n");
	}
}

