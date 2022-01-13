#include <stdio.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int Num[N];
	for (i=0; i<N; i++) {
		//1030 1038
//		Num[i] = (i+1)*10;
		scanf("%d", &Num[i]);
	}
	
	for (i=0; i<N; i++) {
		//1030 1038
		printf("%d\n", Num[i]);
	} 
	
	return 0;
}
