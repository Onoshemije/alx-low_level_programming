#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: "This program will print the last digit..."
 * Return: Always 0 (success)
 */
int main(void)
{
int lastDigit(int n);
	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (lastDigit n % 10 : > 5)
		printf("%sLast digit of, %d %sis %sand is greater than 5\n");
		else if (lastDigit n % 10 : == 0)
		printf("%sLast digit of, %d %sis %sand is zero\n");
		else if (lastDigit n % 10 : < 6, !0)
		printf("%sLast digit of, %d %sis, %sand is less than 6 and no 0\n");
		return (0);
}
