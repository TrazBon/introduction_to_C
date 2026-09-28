#include <stdio.h>

int main (){
	int x1,x2,y1,y2;
	float k,b;

	scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
	
	k = (y2 - y1)/(float)(x2 - x1); // Коэффициент наклона
	b = (float)y1 - k * x1; // По первой точке найти b
	
	printf("%.2f %.2f", k, b);
	
	return 0;
}
