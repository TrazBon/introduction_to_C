#include <stdio.h>

int main (){
	int n,a,b,c,M;
	
	scanf("%d", &n);
	
	a = n/100;
	b = (n/10) % 10;
	c = n % 10;
	
	M = a * b * c;
	
	printf("%d", M);
	
	return 0;
}
