#include <stdio.h>

int main(void) {

    printf("Input Arithmetic Operation\n");

    float num1, num2;
    char k;
    float a;
    float result; //�ŵ������� �����
    result = 1.00; //�ʱⰪ 1�� ����

    printf("ex)      3.4 * 8.5\n");
    printf("         2.9 - 5.4\n");
    printf("         3.9 * 8.0\n");
    printf("         3.9 ^ 8  \n");
    printf("input: ");

    scanf("%f %c %f", &num1, &k, &num2); //k�� ���� ��ȣ

    for (a = num2; a > 0; a--) {

        result *= num1; //for���� �ݺ��Ǹ鼭 num1�� num2���� �����

    }


    switch (k) {

    case '+':
        printf("%.2f + %.2f = %.2f\n ", num1, num2, num1 + num2); //����
        break;

    case '-':
        printf("%.2f - %.2f = %.2f\n ", num1, num2, num1 - num2); //����
        break;

    case '*':
        printf("%.2f * %.2f = %.2f\n ", num1, num2, num1 * num2); //����
        break;

    case '/':
        printf("%.2f / %.2f = %.2f\n ", num1, num2, num1 / num2); //������
        break;

    case '^':
        printf("%.2f ^ %.2f = % .2f\n ", num1, num2, result); //�ŵ�����
    }

}
