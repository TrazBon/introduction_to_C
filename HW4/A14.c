#include <stdio.h>

int main (){	
	int max,n,a,b,c;

	scanf("%d", &n);
	
	a = n/100;
	b = (n/10) % 10;
	c = n % 10;
	
	max = a>b?a:b;
	max = max>c?max:c;
	
	printf("%d", max);
	
	return 0;
}
