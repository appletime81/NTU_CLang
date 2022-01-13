#include <stdio.h>
#include <stdlib.h>


int main() {
    int classIndex, studentIndex, classNum, studentNum;
    int **studentScore;
    double tempAvg = 0;
    double totalAvg = 0;

    // input class numbers
    scanf("%d", &classNum);

    // input student numbers
    scanf("%d", &studentNum);

    studentScore = (int **) malloc(sizeof(int *) * classNum);
    for (classIndex = 0; classIndex < classNum; classIndex++) {
        studentScore[classIndex] = (int *) malloc(sizeof(int) * studentNum);
    }

    for (classIndex = 0; classIndex < classNum; classIndex++) {
        for (studentIndex = 0; studentIndex < studentNum; studentIndex++) {
            scanf("%d", &studentScore[classIndex][studentIndex]);
        }
    }

    for (classIndex = 0; classIndex < classNum; classIndex++) {
        printf("class %d\n", classIndex + 1);
        for (studentIndex = 0; studentIndex < studentNum; studentIndex++) {
            totalAvg += (double) studentScore[classIndex][studentIndex] / classNum / studentNum;
            tempAvg += (double) studentScore[classIndex][studentIndex] / studentNum;
            printf(" %d: %d\n", studentIndex + 1, studentScore[classIndex][studentIndex]);
        }
        printf(" avg: %.2f\n", tempAvg);
        tempAvg = 0;
    }
    printf("avg: %.2f\n", totalAvg);
    system("PAUSE");
    return 0;
}