#include <stdio.h>

int main() {

	int n, i, j; 

	printf("���� �Է��ϼ���. ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) //�� ����ŭ �ݺ� <���� ����� ���>

	{
		for (j = 0; j < i + 1; j++)

		{
			printf("*"); //���� ����� ����
		}

		for (j = 0; j < (n - 1-i)*2; j++)

		{
			printf(" "); //����� ����
		}

		for (j = 0; j < i + 1; j++)

		{
			printf("*"); //���� ����� ������
		}

		printf("\n");
	}

	for (i = 0; i < n; i++) //�� ����ŭ �ݺ� <���� ����� �ϴ�>

	{
		for (j = n; j > i + 1; j--){
			printf("*"); //���� ����� ����
		}

		for (j = 0; j < (n+n)-(n - 1 - i) * 2; j++){
			printf(" "); //����� ����
		}

		for (j = n; j > i + 1; j--){
			printf("*"); //���� ����� ������
		}

		printf("\n");
	}
		
}