#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, prime = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			prime++;
		else
			prime = 0;
	}
	if (prime == 0)
		printf("�Ҽ��� �ƴմϴ�.");
	else
		printf("�Ҽ��Դϴ�.");
}