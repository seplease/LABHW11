#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int sumMToN(int m, int n); // 함수의 원형
int main(void)
{
	printf("%d 부터 % d 까지의 합은 %d\n", 2, 5, sumMToN(2, 5)); //함수의 호출부분 추가
	printf("%d 부터 % d 까지의 합은 %d\n", 3, 7, sumMToN(3, 7));
	printf("%d 부터 % d 까지의 합은 %d\n", 2, 10, sumMToN(2, 10));
}
int sumMToN(int m, int n) // 함수의 정의
{
	int sum = 0;

	for (int i = m; i <= n; i++)
		sum += i;

	return sum;
	// 이곳에 m 부터 n 까지의 합을 계산하여
	// 그 합을 return 하는 함수 정의부분을 코딩한다
}