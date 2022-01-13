#include <stdio.h>
#include <stdlib.h>
//1029

int main(int argc, char *argv[]) {
//	int i;
//	int score[3] = {0};
//	double sum=0; 
//	double avg;
//	
//	for (i=0; i<3; i++){
//		scanf("%d", &score[i]);
//	}
//	
//	for (i=0; i<3; i++){
//		sum += score[i];
//	}
//	
//	avg = sum / 3;
//	
//	printf("avg = %.2f\n", avg);
//	printf("fail:\n");	
//	
//	for (i=0; i<3; i++){
//		if (score[i] < 60) {
//			printf("%d: %d\n", (i+1), score[i]);
//		}
//	}
//	return 0;


	int i;
	int MAX=0;
	int MAXINDEX=0;
	int score[3] = {0};
	double sum=0; 
	double avg;
	
	for (i=0; i<3; i++){
		scanf("%d", &score[i]);
	}
	
	for (i=0; i<3; i++){
		sum += score[i];
	}
	
	avg = sum / 3;
	
	printf("avg = %.2f\n", avg);
	printf("fail:\n");	
	
	for (i=0; i<3; i++){
		if (score[i] < 60) {
			printf("%d: %d\n", (i+1), score[i]);
		}
	}
	
	for (i=0; i<3; i++){
		if (score[i] > MAX) {
			MAX = score[i];
			MAXINDEX = i;
		}
	}
	printf("highest:\n");
	printf("%d: %d", MAXINDEX+1, MAX);
	
	return 0;
}
