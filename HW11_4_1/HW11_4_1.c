#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int num); // 함수의 원형
int main(void)
{
	int num;
	/*
	do
	{
		printf("Enter a number<-1 for exit>");
		scanf("%d", &num);

		if (num == -1)//이렇게 하는건 별로 안좋음
			break;
		if (isPrime(num))
			printf("소수입니다.\n");
		else
			printf("소수가 아닙니다.\n");
	} while (num != -1);

	return 0;
	//do while 말고 while을 사용하는거였음.........
	*/
	printf("Enter a number<-1 for exit>");
	scanf("%d", &num);
	while (num != -1) {
		if (isPrime(num))
			printf("소수입니다.\n");
		else
			printf("소수가 아닙니다.\n");

		printf("Enter a number<-1 for exit>");
		scanf("%d", &num);
	}
}
int isPrime(int num) // 함수의 정의 num의 소수여부를 반환
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