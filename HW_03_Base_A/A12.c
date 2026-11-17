#include <stdio.h>

int main (){
	int n,a,b,c,S;
	
	scanf("%d", &n);
	
	a = n/100;
	b = (n/10) % 10;
	c = n % 10;
	
	S = a + b + c;
	
	printf("%d", S);
	
	return 0;
}
