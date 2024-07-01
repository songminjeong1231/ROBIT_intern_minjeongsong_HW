#include <stdio.h>

int main() {

	int n, i, j; 

	printf("값을 입력하세요. ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) //줄 수만큼 반복 <리본 모양의 상단>

	{
		for (j = 0; j < i + 1; j++)

		{
			printf("*"); //리본 모양의 왼쪽
		}

		for (j = 0; j < (n - 1-i)*2; j++)

		{
			printf(" "); //가운데의 공백
		}

		for (j = 0; j < i + 1; j++)

		{
			printf("*"); //리본 모양의 오른쪽
		}

		printf("\n");
	}

	for (i = 0; i < n; i++) //줄 수만큼 반복 <리본 모양의 하단>

	{
		for (j = n; j > i + 1; j--){
			printf("*"); //리본 모양의 왼쪽
		}

		for (j = 0; j < (n+n)-(n - 1 - i) * 2; j++){
			printf(" "); //가운데의 공백
		}

		for (j = n; j > i + 1; j--){
			printf("*"); //리본 모양의 오른쪽
		}

		printf("\n");
	}
		
}