#include <stdio.h>

int main() {

	int year;

	printf("년도를 입력하세요: ");
	scanf("%d", &year);

	if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) //4의 배수면서 100의 배수가 아니거나 400의 배수인 경우
	{

		printf("윤년");
	}

	else
		printf("윤년이 아님");
}