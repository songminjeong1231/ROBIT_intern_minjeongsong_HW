#include <stdio.h>

int main() {
	int n, i;
	float j;

	printf("���� �Է��ϼ���. ");
	scanf("%d", &n);

	for (i = 0; i < n-1; i++) {
		
			printf(" "); //�Ƕ�̵� ù�� ������ ����
		
	}
	printf("*"); //�Ƕ�̵� ù���� ��
	printf("\n"); //ù���� ���� ó��
	
		
	for (i = 1; i < n - 1; i++)
	{
		if (n == 1) continue; {
			for (j = n; j > i + 1; j--) {
				printf(" "); //�Ƕ�̵� ������ ����
			}
			printf("*"); //�Ƕ�̵��� ���� ��
			for (j = 0; j < i * 2 - 1; j++) {
				printf(" "); //�Ƕ�̵� �߾��� ����
			}


			printf("*"); //�Ƕ�̵��� ���� ��
		}

			printf("\n");
		}

		for (i = 0; i < 2 * n - 1; i++) {
			printf("*"); //�������� ���� ó��
		}
	    
	}
	
