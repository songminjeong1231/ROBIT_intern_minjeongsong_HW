#include <stdio.h>

int main()
{
	int n = 0, r = 0;
    float f_1=1, f_2=1, f_3=1, f_4=1, f_5=1, f_6=1;

	printf("n, r �Է� : ");
	scanf("%d", &n);
	scanf("%d", &r);

	for (int a = n; a >= 1; a--)//n���丮��
	{
		f_1 *= a;
	}
	for (int b = n - r; b >= 1; b--)//n-r���丮��
	{
		f_2 *= b;
	}
	for (int c = r; c >= 1; c--)//r���丮��
	{
		f_3 *= c;
	}
	for (int d = r; d >= 1; d--)//n�� r��
	{
		f_4 *= d;
	}
	for (int e = n + r - 1; e >= 1; e--)//n+r-1 ���丮��
	{
		f_5 *= e;
	}
	for (int f = n - 1; f >= 1; f--)//n-1 ���丮��
	{
		f_6 *= f;
	}
	printf("���� : %.2f\n", f_1 / f_2);
	printf("�ߺ����� : %.2f\n", f_4);
	printf("���� : %.2f\n", f_1 / (f_2 * f_3));
	printf("�ߺ����� : %.2f\n", f_5 / (f_6 * f_3));
}