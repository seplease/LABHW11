#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int scoreReading(void);
char gradeDecision(int s1);
int main(void)
{
	int score;
	score = scoreReading();
	printf("Grade is %c!\n", gradeDecision(score)); 
}
int scoreReading(void)
{
	int s;
	printf("Enter a score: ");
	scanf("%d", &s);

	return s;
}
char gradeDecision(int s1)
{
	if (80 <= s1)
		(char)s1 = 'A';
	else if (50 <= s1 && s1 < 80)
		(char)s1 = 'B';
	else
		(char)s1 = 'F';

	return s1;
}