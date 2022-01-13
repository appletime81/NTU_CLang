#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int top = 10;
//	int bottom = 15;
//	int height = 7;
//	double area;
//	
//	area = (double)(top + bottom) * height / 2;
//	printf("Area is %.1f\n", area);
//	return 0;
	int top;
	int bottom;
	int height;
	double area;
	
	printf("Please input top length: ");
	scanf("%d", &top);
	
	printf("Please input bottom length: ");
	scanf("%d", &bottom);
	
	printf("Please input top length: ");
	scanf("%d", &height);
	
	
	area = (double)(top + bottom) * height / 2;
	printf("Area is %.1f\n", area);
	return 0;
}
