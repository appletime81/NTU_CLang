#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, N;
	scanf("%d", &N);
	
	int array[N];
	
	for (i=0; i<N; i++){
		scanf("%d", &array[i]);
	}
	
	for (i=0; i<N; i++){
		if (i<(N-1)) {
			printf("%d ", array[N-i-1]);
		} else {
			printf("%d", array[N-i-1]);
		}
		
	}
	return 0;
}
