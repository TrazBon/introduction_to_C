#include <stdio.h>

int main (){
	int a,b,c;
	float Average;
	
	scanf("%d %d %d", &a, &b, &c);
	Average = (a+b+c)/3.;
	
	printf("%.2f", Average);
	return 0;
}
