#include <stdio.h>

int main(void)
{
	int a;
	
	printf("������ �Է��Ͻʽÿ�. : ");
	scanf_s("%d", &a);

	if (a % 3 == 0)
		printf("�Է��Ͻ� ������ 3�� ����Դϴ�.\n");
	else if (a % 2 == 0)
		printf("�Է��Ͻ� ������ 2�� ����Դϴ�.\n");
	else
		printf("�Է��Ͻ� ������ 2�� ����� 3�� ����� �ƴմϴ�.\n");

	return 0;

}