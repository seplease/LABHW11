#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//2 �� n ���� ��ȯ�ϴ� �Լ�
long long twoToThePower(int n)
{
	long long result = 1;

	for (int i = 0; i < n; i++)
		result *= 2;

	return result;
}
// x �� �Ҽ��̸� 1 �� �ƴϸ� 0 �� ��ȯ�ϴ� �Լ�
int isPrime(long long x)
{
	int prime = 1;

	for (int i = 2; i < x; i++)
		if (x % i == 0)
			return 0;
	return prime;
}
int main(void)
{
	int num;
	long long mer;

	printf("Enter a number:");
	scanf("%d", &num);

	for (int i = 2; i <= num; i++)
	{
		mer = twoToThePower(i) - 1;
		if (isPrime(mer) == 1)
			printf("(2^%d - 1) = %d�� �Ҽ��̴�.\n", i, mer);
	}
}