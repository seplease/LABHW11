#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
//2 의 n 승을 반환하는 함수
long long twoToThePower(int n)
{
	long long result = 1;

	for (int i = 0; i < n; i++)
		result *= 2;

	return result;
}
// x 가 소수이면 1 을 아니면 0 을 반환하는 함수
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
			printf("(2^%d - 1) = %d는 소수이다.\n", i, mer);
	}
}