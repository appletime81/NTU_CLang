#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score1[3] = {0};
	int score2[3] = {0};
	int sum1 = 0;
	int sum2 = 0;
	int i, total=0;
	double avg1, avg2, totalAvg;
	
	scanf("%d%d%d", &score1[0], &score1[1], &score1[2]);
	scanf("%d%d%d", &score2[0], &score2[1], &score2[2]);
	
	printf("class 1\n");
	for (i=0; i<3; i++) {
		printf(" %d: %d\n", (i+1), score1[i]);
		sum1 += score1[i];
	}
	avg1 = (sum1/3);
	printf(" sum: %d\n", sum1);
	printf(" avg: %.2f\n", (double)avg1);
	
	
	printf("class 2\n");
	for (i=0; i<3; i++) {
		printf(" %d: %d\n", (i+1), score2[i]);
		sum2 += score2[i];
	}
	avg2 = (sum2/3);
	printf(" sum: %d\n", sum2);
	printf(" avg: %.2f\n", (double)avg2);
	
	total = sum1 + sum2;
	totalAvg = (sum1 + sum2)/6;
	
	printf("total: %d, avg: %.2f", total, (double)totalAvg);
	
	return 0;
}
