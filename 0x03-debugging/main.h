#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * largest_number - returns largest number
 * Return: largest number of the three
 * @a: given number
 * @b: given number
 * @c: given numebr
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else if (a > b && a >= c)
	{
		largest = a;
	}
	else if (b > a && b >= c)
	{
		largest = b;
	}
	else if (c > a && c >= b)
	{
		largest = c;
	}

	return (largest);
}

/**
 * print_remaining_days - prints remaining days
 * Return :void
 * @month: month in number format
 * @day: day of month
 * @year: year
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

#endif /* MAIN_H */
