#include <stdio.h>

int main (){
	int max,a,b,c;

	scanf("%d %d %d", &a,&b,&c);
	
	max = a>b?a:b;
	max = max>c?max:c;

	printf("%d", max);

	return 0;
}
