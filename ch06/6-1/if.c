// file: if.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double temperature;

	printf("���� �µ� �Է�: ");
	scanf("%lf", &temperature);

	if (temperature >= 32.0)
	{
		printf("���� ���Ǻ��� �߷��մϴ�.\n");
		printf("�ǰ��� �����ϼ���.\n");
	}
	printf("���� �µ��� ���� %.2f �Դϴ�.\n", temperature);

	return 0;
}
