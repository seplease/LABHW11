#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdio.h> 
int square1(void);
int main(void)
{
	int result;
	result = square1();
	printf("������ %d\n", result);
}
int square1(void)
{
	int x = 5;
	return (x * x);
}