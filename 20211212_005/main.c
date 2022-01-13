#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int starNum;
	int i, j;
	
	scanf("%d", &starNum);
	
	for (i=0; i<starNum; i++) {
		for (j=0; j<starNum; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
