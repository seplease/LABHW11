#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int pow(int a, int b);
int main(void)
{
	int x, y;
	printf("Enter the number X: ");
	scanf("%d", &x);
	printf("Enter the number Y: ");
	scanf("%d", &y);
	printf("%d ^ %d == %d", x, y, pow(x, y));
}
int pow(int a, int b)
{
	if (b == 1)
		return a;
	if (b == 0)
		return 1;
	return (a * pow(a, b - 1));
}