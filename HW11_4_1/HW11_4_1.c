#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int num); // �Լ��� ����
int main(void)
{
	int num;
	/*
	do
	{
		printf("Enter a number<-1 for exit>");
		scanf("%d", &num);

		if (num == -1)//�̷��� �ϴ°� ���� ������
			break;
		if (isPrime(num))
			printf("�Ҽ��Դϴ�.\n");
		else
			printf("�Ҽ��� �ƴմϴ�.\n");
	} while (num != -1);

	return 0;
	//do while ���� while�� ����ϴ°ſ���.........
	*/
	printf("Enter a number<-1 for exit>");
	scanf("%d", &num);
	while (num != -1) {
		if (isPrime(num))
			printf("�Ҽ��Դϴ�.\n");
		else
			printf("�Ҽ��� �ƴմϴ�.\n");

		printf("Enter a number<-1 for exit>");
		scanf("%d", &num);
	}
}
int isPrime(int num) // �Լ��� ���� num�� �Ҽ����θ� ��ȯ
{
	int i = 2;
	while (1) {
		if (num % i != 0)
			return 1;
		else
			return 0;
		i++;
	}
}