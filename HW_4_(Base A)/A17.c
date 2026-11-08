#include <stdio.h>

int main (){
	int m;
	
	scanf("%d", &m);
	
	if (m <= 2 || m == 12)
		printf("winter");
	else if (m >= 3 && m <=5)
		printf("spring");
	else if (m >= 6 && m <=8)
		printf("summer");
	else if (m >= 9 && m <=11)
		printf("autumn");
	
	return 0;
}
