#include <stdio.h>
#include <stdlib.h>

// 1181
int main() {
    FILE *outputStr;
    char fileName[80];
    int i, Num;
    int *numArray;

    scanf("%s", fileName);
    scanf("%d", &Num);

    numArray = malloc(Num * sizeof(int));

    for (i = 0; i < Num; i++) {
        scanf("%d", &numArray[i]);
    }


    outputStr = fopen(fileName, "w");
    for (i = 0; i < Num; i++) {
        fprintf(outputStr, "%d ", numArray[i]);
    }

    fclose(outputStr);

    return 0;
}
