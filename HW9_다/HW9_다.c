#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n)
{
	int cycle_length = 1;
	int count = 1;

	printf("%d ", n); //수열을 만들면서 숫자 출력

	if (n == 1)
		return count;
	else if (n % 2 == 0) //n이 짝수이면
		cycle_length += get_cycle_number(n / 2); //n을 2로 나누고 자기 자신을 호출한다.
//이 때 사이클 길이가 1 추가되므로 count에 더하면서 호출함
	else    //n이 홀수이면
		cycle_length += get_cycle_number(n * 3 + 1); //n에 3을 곱하고 1을 더한다.

	return cycle_length; //모든 호출과정이 끝나고 구해진 사이클 길이(count)를 return한다.
}

int main(void) {
	int num;

	printf("Enter a number:");
	scanf("%d", &num);

	printf("\n사이클 길이는 %d\n", get_cycle_number(num));
}