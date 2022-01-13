#include <stdio.h>
#include "prime.h"


int main() {
    int num, returnCode;

    scanf("%d", &num);

    // policy
    returnCode = IsPrime(num);

    if (returnCode) {
        printf("%d is prime\n", num);
    } else {
        printf("%d is not prime\n", num);
    }

    return 0;
}
