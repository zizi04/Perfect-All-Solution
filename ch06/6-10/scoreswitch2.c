// file: scoreswitch2.c
#define _CRT_SECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int  score;

	printf("����(0���� 100����) �Է�: ");
	scanf("%d", &score);

	if (score < 0 || score > 100) {
		printf("���� �Է��� �߸��Ǿ����ϴ�.\n");
		return 0;
	}

	switch (score / 10) {
	default:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'F');
		break; //�ݵ�� �ʿ��� break 

	case 10: case 9:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'A');
		break;
	case 8:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'B');
		break;
	case 7:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'C');
		break;
	case 6:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'D');
		break;
	}

	return 0;
}
