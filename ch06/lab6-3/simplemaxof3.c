// file: simplemaxof3.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int main(void)
{
	int x, y, z;

	printf("�� ������ �Է�: ");
	scanf("%d %d %d", &x, &y, &z);

	switch ((x > y))
	{
	case 0:
		printf("�ִ� ��: %d\n", y > z ? y : z);
		break;

	case 1:
		printf("�ִ� ��: %d\n", x > z ? x : z);
		break;
	}

	return 0;
}
