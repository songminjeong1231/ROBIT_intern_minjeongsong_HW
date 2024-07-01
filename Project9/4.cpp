#include <stdio.h>

int main(void) {

    printf("Input Arithmetic Operation\n");

    float num1, num2;
    char k;
    float a;
    float result; //°ÅµìÁ¦°öÀÇ °á°ú°ª
    result = 1.00; //ÃÊ±â°ª 1·Î ¼³Á¤

    printf("ex)      3.4 * 8.5\n");
    printf("         2.9 - 5.4\n");
    printf("         3.9 * 8.0\n");
    printf("         3.9 ^ 8  \n");
    printf("input: ");

    scanf("%f %c %f", &num1, &k, &num2); //k´Â ¿¬»ê ºÎÈ£

    for (a = num2; a > 0; a--) {

        result *= num1; //for¹®ÀÌ ¹Ýº¹µÇ¸é¼­ num1ÀÇ num2½ÂÀ» °è»êÇÔ

    }


    switch (k) {

    case '+':
        printf("%.2f + %.2f = %.2f\n ", num1, num2, num1 + num2); //µ¡¼À
        break;

    case '-':
        printf("%.2f - %.2f = %.2f\n ", num1, num2, num1 - num2); //»¬¼À
        break;

    case '*':
        printf("%.2f * %.2f = %.2f\n ", num1, num2, num1 * num2); //°ö¼À
        break;

    case '/':
        printf("%.2f / %.2f = %.2f\n ", num1, num2, num1 / num2); //³ª´°¼À
        break;

    case '^':
        printf("%.2f ^ %.2f = % .2f\n ", num1, num2, result); //°ÅµìÁ¦°ö
    }

}
