#include <stdio.h>
#include "prime.h"


int IsPrime(int num) {
    int i;

    for (i = 2; i < num; i++) {
        if (num % i == 0 && i != num) {
            return 0;
        }
    }
    return 1;
}

