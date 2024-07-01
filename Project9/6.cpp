#include <stdio.h>

int main() {
	int n, i;
	float j;

	printf("값을 입력하세요. ");
	scanf("%d", &n);

	for (i = 0; i < n-1; i++) {
		
			printf(" "); //피라미드 첫줄 왼쪽의 공백
		
	}
	printf("*"); //피라미드 첫줄의 별
	printf("\n"); //첫줄은 예외 처리
	
		
	for (i = 1; i < n - 1; i++)
	{
		if (n == 1) continue; {
			for (j = n; j > i + 1; j--) {
				printf(" "); //피라미드 왼쪽의 공백
			}
			printf("*"); //피라미드의 좌측 별
			for (j = 0; j < i * 2 - 1; j++) {
				printf(" "); //피라미드 중앙의 공백
			}


			printf("*"); //피라미드의 우측 별
		}

			printf("\n");
		}

		for (i = 0; i < 2 * n - 1; i++) {
			printf("*"); //마지막줄 예외 처리
		}
	    
	}
	
