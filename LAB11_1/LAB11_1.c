#define _CRT_SECUE_NO_WARNINGS
#include <stdio.h> 
int sum1ToN(int n); // 함수의 원형
int main(void)
{
	printf("1 부터 %d 까지의 합은 %d\n", 5, sum1ToN(5));
	printf("1 부터 %d 까지의 합은 %d\n", 7, sum1ToN(7));
	printf("1 부터 %d 까지의 합은 %d\n", 10, sum1ToN(10));
}
int sum1ToN(int n)
{
	int sum = 0, i = 1;
	while (i <= n) {
		sum += i;
		i++;
	}
	return sum;
}