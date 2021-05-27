#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int get_cycle_number(int n)
{
	int cycle_length = 1;
	int count = 1;

	printf("%d ", n); //������ ����鼭 ���� ���

	if (n == 1)
		return count;
	else if (n % 2 == 0) //n�� ¦���̸�
		cycle_length += get_cycle_number(n / 2); //n�� 2�� ������ �ڱ� �ڽ��� ȣ���Ѵ�.
//�� �� ����Ŭ ���̰� 1 �߰��ǹǷ� count�� ���ϸ鼭 ȣ����
	else    //n�� Ȧ���̸�
		cycle_length += get_cycle_number(n * 3 + 1); //n�� 3�� ���ϰ� 1�� ���Ѵ�.

	return cycle_length; //��� ȣ������� ������ ������ ����Ŭ ����(count)�� return�Ѵ�.
}

int main(void) {
	int num;

	printf("Enter a number:");
	scanf("%d", &num);

	printf("\n����Ŭ ���̴� %d\n", get_cycle_number(num));
}