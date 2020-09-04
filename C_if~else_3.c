#include <stdio.h>

int main(void)
{
	int a;
	
	printf("정수를 입력하십시오. : ");
	scanf_s("%d", &a);

	if (a % 3 == 0)
		printf("입력하신 정수는 3의 배수입니다.\n");
	else if (a % 2 == 0)
		printf("입력하신 정수는 2의 배수입니다.\n");
	else
		printf("입력하신 정수는 2의 배수도 3의 배수도 아닙니다.\n");

	return 0;

}