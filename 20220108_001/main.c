#include <stdio.h>
#include <stdlib.h>

//1076
struct Pokemon {
    char name[100];
    int lv;
    int hp;
};


int main() {
    struct Pokemon pokemon1;
    struct Pokemon pokemon2;
    scanf("%s", pokemon1.name);
    scanf("%d", &pokemon1.lv);
    scanf("%d", &pokemon1.hp);

    scanf("%s", pokemon2.name);
    scanf("%d", &pokemon2.lv);
    scanf("%d", &pokemon2.hp);

    printf("Name: %s\n", pokemon1.name);
    printf("Lv: %d\n", pokemon1.lv);
    printf("HP: %d\n\n", pokemon1.hp);

    printf("Name: %s\n", pokemon2.name);
    printf("Lv: %d\n", pokemon2.lv);
    printf("HP: %d\n\n", pokemon2.hp);


    return 0;
}
