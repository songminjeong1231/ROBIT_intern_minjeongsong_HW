#include <stdio.h>

int main() {

	float num1, num2, num3, num4, num5;
	float avg, max, min;

	printf("1��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &num1);       //num1 �Ǽ� ����

	printf("2��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &num2);       //num2 �Ǽ� ����

	printf("3��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &num3);       //num3 �Ǽ� ����

	printf("4��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &num4);       //num4 �Ǽ� ����

	printf("5��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf("%f", &num5);       //num5 �Ǽ� ����

	printf("\n---- ��� ----\n");

	avg = (num1 + num2 + num3 + num4 + num5) / 5; //�ټ� ���� ��� ���ϱ�
	printf("����� %f�Դϴ�.\n", avg);

	max = num1;
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	if (max < num4) max = num4;
	if (max < num5) max = num5;
	
	printf("�ִ��� %f�Դϴ�.\n", max); //max ���ϱ�

	min = num1;
	if (min > num2) min = num2;
	if (min > num3) min = num3;
	if (min > num4) min = num4;
	if (min > num5) min = num5;

	printf("�ּڰ��� %f�Դϴ�.\n", min); //min ���ϱ�

}