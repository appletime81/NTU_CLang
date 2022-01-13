#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score;
	int student;
	
	scanf("%d", &student);
	scanf("%d", &score);
	
	if (score>=60 && student==1){
		printf("pass");
	} else if (score>=70 && student==2){
		printf("pass");
	} else {
		printf("fail");
	}

	return 0;
}
