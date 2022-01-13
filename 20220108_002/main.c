#include <stdio.h>


#define N 3

//1078
struct Pokemon {
    char name[100];
    int lv;
    int hp;
};


int main() {
    struct Pokemon pokemon[N];
    int i, maxLv, flag = 0;


    for (i = 0; i < N; i++) {
        scanf("%s", pokemon[i].name);
        scanf("%d", &pokemon[i].lv);
        scanf("%d", &pokemon[i].hp);
    }
    scanf("%d", &maxLv);

    // 找出Lv大於N的Pokemon
    for (i = 0; i < 3; i++) {
        if (pokemon[i].lv >= maxLv) {
            printf("Name: %s\n", pokemon[i].name);
            printf("Lv: %d\n", pokemon[i].lv);
            printf("HP: %d\n\n", pokemon[i].hp);
            flag = 1;
        }
    }

    if (!flag) {
        printf("not found");
    }

    return 0;
}
