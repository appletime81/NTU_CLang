#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, num3;
	int numList[3];
	int i, j, temp;
	int n=3;
	
	scanf("%d%d%d", &num1, &num2, &num3);
	
	numList[0] = num1;
	numList[1] = num2;
	numList[2] = num3;
	
	for (i=0; i<n-1; i++) {
        for (j=0; j<n-i-1; j++) {
            if (numList[j] > numList[j+1]) {
                int temp = numList[j];
                numList[j] = numList[j+1];
                numList[j+1] = temp;
            }
        }
    }
    

	
	if (numList[2] == num1){
		printf("True\n");
	} else {
		printf("False\n");
	}
	
	if (numList[0] == num1){
		printf("True\n");
	} else {
		printf("False\n");
	}
	
	if (numList[0] == num1 ||  numList[1] == num1){
		printf("True\n");
	} else {
		printf("False\n");
	}
	
	if (numList[1] == num1 ||  numList[2] == num1){
		printf("True\n");
	} else {
		printf("False");
	}

	return 0;

}
