// file: ifelse.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printf("���� �Է�: ");
	scanf("%d", &n);

	if (n % 2) // if (n % 2 != 0)
		printf("Ȧ��");
	else
		printf("¦��");

	printf("�Դϴ�.\n");

	//���ǿ����� �̿�
	(n % 2) ? printf("Ȧ��") : printf("¦��");
	printf("�Դϴ�.\n");

	return 0;
}
