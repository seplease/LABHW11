#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h> 
int square2(void);
int main(void)
{
	int result;
	result = square2(5);
	printf("������ %d\n", result);
}
int square2(int x)
{
	return (x * x);
}