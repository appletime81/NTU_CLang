#include <stdio.h>
#include <stdlib.h>

int main() {
    int *score;
    int i, studentNum;
    double avg = 0;
    int maxNumIndex, maxNum = -999999999;

    // get student numbers
    scanf("%d", &studentNum);

    // give score space
    score = (int *) malloc(sizeof(int) * studentNum);
    for (i = 0; i < studentNum; i++) {
        scanf("%d", &score[i]);
    }

    for (i = 0; i < studentNum; i++) {
        avg += (double) score[i] / studentNum;
        if (score[i] > maxNum) {
            maxNum = score[i];
            maxNumIndex = i;
        }
    }

    // print result
    printf("avg = %.2f\n", avg);
    printf("fail:\n");
    for (i = 0; i < studentNum; i++) {
        if (score[i] < 60) {
            printf("%d: %d\n", i + 1, score[i]);
        }
    }
    printf("highest:\n%d: %d\n", maxNumIndex + 1, maxNum);

    // free memory
    free(score);
    score = NULL;
    
    system("PAUSE");
    return 0;
}
