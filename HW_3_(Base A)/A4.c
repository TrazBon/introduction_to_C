#include <stdio.h>

int main (){
	int a,b,c,S,M;
	
	scanf("%d %d %d", &a, &b, &c);
	S = a+b+c;
	M = a*b*c;
	
	printf("%d+%d+%d=%d", a,b,c,S);
	printf("%d*%d*%d=%d", a,b,c,M);
	
	return 0;
}
