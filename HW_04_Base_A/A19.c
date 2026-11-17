#include <stdio.h>

int main (){
	int a,b,c;
	int f = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	((a+b) > c) ? f++ : 0;
	((a+c) > b) ? f++ : 0;
	((b+c) > a) ? f++ : 0;

	(f == 3) ? printf("YES") : printf("NO");
		
	return 0;
}
