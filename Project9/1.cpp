#include <stdio.h>

int main() {

	float num1, num2, num3, num4, num5;
	float avg, max, min;

	printf("1번째 실수를 입력하시오. ");
	scanf("%f", &num1);       //num1 실수 저장

	printf("2번째 실수를 입력하시오. ");
	scanf("%f", &num2);       //num2 실수 저장

	printf("3번째 실수를 입력하시오. ");
	scanf("%f", &num3);       //num3 실수 저장

	printf("4번째 실수를 입력하시오. ");
	scanf("%f", &num4);       //num4 실수 저장

	printf("5번째 실수를 입력하시오. ");
	scanf("%f", &num5);       //num5 실수 저장

	printf("\n---- 결과 ----\n");

	avg = (num1 + num2 + num3 + num4 + num5) / 5; //다섯 수의 평균 구하기
	printf("평균은 %f입니다.\n", avg);

	max = num1;
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	if (max < num4) max = num4;
	if (max < num5) max = num5;
	
	printf("최댓값은 %f입니다.\n", max); //max 구하기

	min = num1;
	if (min > num2) min = num2;
	if (min > num3) min = num3;
	if (min > num4) min = num4;
	if (min > num5) min = num5;

	printf("최솟값은 %f입니다.\n", min); //min 구하기

}