#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int scoreReading(void);
char gradeDecision(int s1, int s2);
int main(void)
{
	int score1, score2;

	score1 = scoreReading();
	score2 = scoreReading();

	//scoreReading()�� �̿��ؼ� score1 �� score2 �� �Է¹޴´�. 
	printf("Grade is %c!", gradeDecision(score1, score2));
}
int scoreReading(void)
{
	int s;

	printf("Enter a score: ");
	scanf("%d", &s);

	return s;
}
char gradeDecision(int s1, int s2)
{
	int average;
	char grade;// �ݵ�� ���

	average = (s1 + s2) / 2;

	if (80 <= average)
		grade = 'A'; // return 'A';
	else if (50 <= average && average < 80)
		grade = 'B'; // return 'B';
	else if (average < 50)
		grade = 'F'; // return 'F';

	return grade;
}