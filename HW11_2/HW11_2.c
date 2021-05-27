#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int pow(int a, int b);
int main(void)
{
	int x = 5, y;

	for (y = 0; y <= 10; y++)
		printf("%d ^ %d == %d\n", x, y, pow(x, y));
}
int pow(int a, int b)
{
	int result = 1;

	for (int i = 0; i < b; i++)
		result *= a;

	return result;
}

/*
	for( i=1; i<=10; i++ )
	{
		res = pow( 2.0, i );
		printf(" 2 ^ %2d = %5.0f \n", i, res );
	}
*/