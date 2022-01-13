#include <stdio.h>
#include <stdlib.h>

int main() {
    // 1050
    int A[5] = {0};
    int i;
    int maxNum = -999999999;
    int maxIndex;

    scanf("%d%d%d%d%d", (A), (A + 1), (A + 2), (A + 3), (A + 4));


    for (i = 0; i < 5; i++) {
        if (maxNum < *(A + i)) {
            maxNum = *(A + i);
            maxIndex = i;
        }
    }

    printf("%d: %d\n", maxIndex + 1, maxNum);

    system("PAUSE");
    return 0;
}
