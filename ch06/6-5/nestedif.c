// file: nestedif.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int main(void)
{
	int type, point;

	printf("��ȣ�� ����: 1(1������), 2(2������): ");
	scanf("%d", &type);
	printf("�ʱ���� ���� �Է�: ");
	scanf("%d", &point);

	if (type == 1)
	{
		if (point >= 70)
			printf("1������ �հ�\n");
		else
			printf("1������ ���հ�\n");
	}
	else if (type == 2)
	{
		if (point >= 60)
			printf("2������ �հ�\n");
		else
			printf("2������ ���հ�\n");
	}

	return 0;
}