#include <stdio.h>

// 1206
int main() {
    FILE *inputStr;
    char str[12];
    char ch;

    // 輸入檔案名稱
    scanf("%s", &str);

    inputStr = fopen(str, "r");

    if (inputStr == NULL) {
        printf("open %s fail", str);
        return 2;
    }

    while (1) {
        fscanf(inputStr, "%c", &ch);
        if (feof(inputStr)) {
            break;
        }
        printf("%c", ch);
    }

    return 0;
}
