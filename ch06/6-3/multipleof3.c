// file: multipleof3.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n;

	printf("���� �Է�: ");
	scanf("%d", &n);

	if (n % 3) // if (n % 3 != 0)
	{
		printf("�Էµ� %d�� 3�� ����� �ƴմϴ�.\n", n);
	}
	else
	{
		printf("�Էµ� %d�� 3�� ����Դϴ�.\n", n);
	}
	printf("���ǽ� %d %% 3�� ����� %d�Դϴ�.\n", n, n % 3);

	return 0;
}
