#include <stdio.h>

int main() {

	int year;

	printf("�⵵�� �Է��ϼ���: ");
	scanf("%d", &year);

	if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) //4�� ����鼭 100�� ����� �ƴϰų� 400�� ����� ���
	{

		printf("����");
	}

	else
		printf("������ �ƴ�");
}