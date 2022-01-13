#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double num1;
    double num2;
    double result;
    
    scanf("%lf", &num1);
	scanf("%lf", &num2);

    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
    return 0;
}
