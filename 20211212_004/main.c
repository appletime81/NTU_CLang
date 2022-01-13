#include <stdio.h>


int main(int argc, char *argv[]) {
	int num;
	int i;
	int j=1;
	
	scanf("%d", &num);
	
	for (i=0; i<(2*num-1); i++){
		if (i>=num){
			printf("%d\n", num - j);
			j++;
		} else {
			printf("%d\n", i+1);
		}
	}
	
	return 0;
}

