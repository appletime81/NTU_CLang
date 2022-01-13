#include <stdio.h>
#include <string.h>

#define maxInputNum 50
#define maxCharNum 80


struct userInfo {
    char userName[maxCharNum];
    char userPhone[maxCharNum];
    char userEmail[maxCharNum];
};


int main() {
    int i, inputIndex = 0, ctrlLoop = 1, isPrint = 1, inputFlag = 0, printFlag = 0;
    char opt;
    char *token;
    char fileName[16];
    char printChar[80];
    struct userInfo userInfoAry[maxInputNum];
    FILE *f;

    // execute policy
    while (ctrlLoop) {

        // user input option
        scanf("%c", &opt);

        switch (opt) {
            case 'i':
                scanf("%s", &userInfoAry[inputIndex].userName);
                scanf("%s", &userInfoAry[inputIndex].userPhone);
                scanf("%s", &userInfoAry[inputIndex].userEmail);
                isPrint = 1;
                inputIndex++;
                break;
            case 'l':
                if (inputIndex > 0 && isPrint == 1) {
                    for (i = 0; i < inputIndex; i++) {
                        printf("#%d\n", (i + 1));
                        printf("Name: %s\n", userInfoAry[i].userName);
                        printf("Phone: %s\n", userInfoAry[i].userPhone);
                        printf("Email: %s\n", userInfoAry[i].userEmail);
                    }
                } else {
                    printf("No data.\n");
                }
                break;
            case 's':
                scanf("%s", fileName);
                f = fopen(fileName, "w");
                for (i = 0; i < inputIndex; i++) {
                    if (i == 0) {
                        fprintf(f, "%d\n", inputIndex);
                    }
                    fprintf(f, "%s\t%s\t%s\n", userInfoAry[i].userName, userInfoAry[i].userPhone,
                            userInfoAry[i].userEmail);
                }
                fclose(f);
                break;
            case 'o':
                isPrint = 1;
                scanf("%s", fileName);
                f = fopen(fileName, "r");
                while (fgets(printChar, 80, f) != NULL) {
                    token = strtok(printChar, "\t");
                    while (token != NULL) {
                        if (printFlag > 0) {
                            if (inputFlag == 0) {
                                strcpy(userInfoAry[inputIndex].userName, token);
                                inputFlag++;
                            } else if (inputFlag == 1) {
                                strcpy(userInfoAry[inputIndex].userPhone, token);
                                inputFlag++;
                            } else if (inputFlag == 2) {
                                strcpy(userInfoAry[inputIndex].userEmail, token);
                                inputIndex++;
                                inputFlag = 0;
                            }
                        } else {
                            printFlag++;
                        }
                        token = strtok(NULL, "\t\n");
                    }
                }
                printFlag = 0;
                break;
            case 'c':
                isPrint = 0;
                inputIndex = 0;
                break;
            case 'q':
                ctrlLoop = 0;
                break;
        }
    }
    return 0;
}