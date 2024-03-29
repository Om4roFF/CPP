#pragma once

/*
    Author RayDarar

    Solutions for Abramyan 4.5

    Module Case
*/

#include <iostream>
#include <ctime>

namespace Case
{
using namespace std;

void task_1(int n)
{
	switch (n)
	{
	case 1:
		cout << "monday";
		break;
	case 2:
		cout << "tuesday";
		break;
	case 3:
		cout << "wednesday";
		break;
	case 4:
		cout << "thursday";
		break;
	case 5:
		cout << "friday";
		break;
	case 6:
		cout << "saturday";
		break;
	case 7:
		cout << "sunday";
		break;
	}
}

void task_2(int k)
{
	switch (k)
	{
	case 1:
		cout << "badly";
		break;
	case 2:
		cout << "unsatisfactory";
		break;
	case 3:
		cout << "satisfactory";
		break;
	case 4:
		cout << "good";
		break;
	case 5:
		cout << "perfectly";
		break;
	default:
		cout << "error";
	}
}

void task_3(int month)
{
	switch (month)
	{
	case 1:
	case 2:
	case 3:
		cout << "winter";
		break;
	case 4:
	case 5:
	case 6:
		cout << "spring";
		break;
	case 7:
	case 8:
	case 9:
		cout << "summer";
		break;
	case 10:
	case 11:
	case 12:
		cout << "fall";
		break;
	}
}

void task_4(int month)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << 30;
		break;
	default:
		cout << 28;
	}
}

void task_5(int n, int a, int b)
{
	switch (n)
	{
	case 1:
		cout << a + b;
		break;
	case 2:
		cout << a - b;
		break;
	case 3:
		cout << a * b;
		break;
	case 4:
		cout << a / b;
		break;
	}
}

void task_6(int n, int length)
{
	switch (n)
	{
	case 1:
		cout << length / 10;
		break;
	case 2:
		cout << length / 1000;
		break;
	case 3:
		cout << length;
		break;
	case 4:
		cout << (length * 1000) * 1000;
		break;
	case 5:
		cout << length * 1000;
		break;
	}
}

void task_7(int n, int weight)
{
	switch (n)
	{
	case 1:
		cout << weight;
		break;
	case 2:
		cout << (weight / 1000) / 1000;
		break;
	case 3:
		cout << weight / 1000;
		break;
	case 4:
		cout << weight * 1000;
		break;
	case 5:
		cout << weight / 10;
		break;
	}
}

#define task8(day, prevDay, nextIfDay, prev, cur, next) \
	day--;                                              \
	if (day == 0)                                       \
	{                                                   \
		day = prevDay;                                  \
		cout << day << " of " << prev;                  \
	}                                                   \
	else if (day == nextIfDay)                          \
	{                                                   \
		day = 1;                                        \
		cout << day << " of " << next;                  \
	}                                                   \
	else                                                \
		cout << day << " of " << cur;

void task_8_9(int day, int month)
{
	switch (month)
	{
	case 1: // January
		task8(day, 31, 32, "December", "January", "February");
		break;
	case 2: // February
		task8(day, 31, 29, "January", "February", "March");
		break;
	case 3: // March
		task8(day, 28, 32, "February", "March", "April");
		break;
	case 4: // April
		task8(day, 31, 31, "March", "April", "May");
		break;
	case 5: // May
		task8(day, 30, 32, "April", "May", "July");
		break;
	case 6: // July
		task8(day, 31, 31, "May", "July", "June");
		break;
	case 7: // June
		task8(day, 30, 32, "July", "June", "August");
		break;
	case 8: // August
		task8(day, 31, 32, "June", "August", "September");
		break;
	case 9: // September
		task8(day, 31, 31, "August", "September", "October");
		break;
	case 10: // October
		task8(day, 30, 32, "September", "October", "November");
		break;
	case 11: // November
		task8(day, 31, 31, "October", "November", "December");
		break;
	case 12: // December
		task8(day, 30, 32, "November", "December", "January");
		break;
	}
}
#define task10(current, left, right, action) \
	if (action == 0)                         \
		cout << current;                     \
	else if (action == 1)                    \
		cout << left;                        \
	else if (action == -1)                   \
		cout << right;

void task_10(char c, int n)
{
	switch (c)
	{
	case 'С':
	case 'N': // North
		task10("N", "W", "E", n);
		break;
	case 'З':
	case 'W': // West
		task10("W", "S", "N", n);
		break;
	case 'Ю':
	case 'S': // South
		task10("S", "E", "W", n);
		break;
	case 'В':
	case 'E': // East
		task10("E", "N", "S", n);
		break;
	}
}

#define _task11(backward, left, right, action) \
	if (action == 1)                           \
		return left;                           \
	else if (action == 2)                      \
		return right;                          \
	else                                       \
		return backward;
char task11(char c, int n)
{
	switch (c)
	{
	case 'С':
	case 'N': // North
		_task11('S', 'W', 'E', n);
	case 'З':
	case 'W': // West
		_task11('E', 'S', 'N', n);
	case 'Ю':
	case 'S': // South
		_task11('N', 'E', 'W', n);
	case 'В':
	case 'E': // East
		_task11('W', 'N', 'S', n);
	}
	return ' ';
}
void task_11(char c, int n1, int n2)
{
	c = task11(c, n1);
	c = task11(c, n2);
	cout << c;
}

void task_12(int n, float value)
{
	float r = 0;
	switch (n)
	{
	case 1:
		r = value;
		break;
	case 2:
		r = value / 2;
		break;
	case 3:
		r = value / 2 * 3.14;
		break;
	case 4:
		r = sqrt(value / 3.14);
		break;
	}
	cout << r << endl
		 << 2 * r << endl
		 << 2 * 3.14 * r << endl
		 << 3.14 * pow(r, 2);
}

void task_13(int n, float value)
{
	float a;
	switch (n)
	{
	case 1:
		a = value;
		break;
	case 2:
		a = value / sqrt(2);
		break;
	case 3:
		a = value * sqrt(2) * 2;
		break;
	case 4:
		a = sqrt(8 * value);
		break;
	}

	cout << a << endl
		 << a * sqrt(2) << endl
		 << a / sqrt(2) * 2 << endl
		 << pow(a, 2) / 8;
}

void task_14(int n, float value)
{
	float a;
	switch (n)
	{
	case 1:
		a = value;
		break;
	case 2:
		a = 6 * value / sqrt(3);
		break;
	case 3:
		a = 3 * value / sqrt(3);
		break;
	case 4:
		a = sqrt(4 * value / sqrt(3));
		break;
	}
	cout << a << endl
		 << a * sqrt(3) / 6 << endl
		 << a * sqrt(3) / 3 << endl
		 << pow(a, 2) * sqrt(3) / 4;
}

void task_15(int n, int m)
{
	switch (n)
	{
	case 6:
		cout << "six ";
		break;
	case 7:
		cout << "seven ";
		break;
	case 8:
		cout << "eight ";
		break;
	case 9:
		cout << "nine ";
		break;
	case 10:
		cout << "ten ";
		break;
	case 11:
		cout << "jack ";
		break;
	case 12:
		cout << "queen ";
		break;
	case 13:
		cout << "king ";
		break;
	case 14:
		cout << "ace ";
		break;
	}
	switch (m)
	{
	case 1:
		cout << "spades";
		break;
	case 2:
		cout << "clubs";
		break;
	case 3:
		cout << "diamonds";
		break;
	case 4:
		cout << "hearts";
		break;
	}
}

void task_16(int age)
{
	int first = age / 10;
	int second = age % 10;
	switch (first)
	{
	case 2:
		cout << "twenty ";
		break;
	case 3:
		cout << "thirty ";
		break;
	case 4:
		cout << "forty ";
		break;
	case 5:
		cout << "fifty ";
		break;
	case 6:
		cout << "sixty ";
		break;
	}
	switch (second)
	{
	case 1:
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	case 3:
		cout << "three";
		break;
	case 4:
		cout << "four";
		break;
	case 5:
		cout << "five";
		break;
	case 6:
		cout << "six";
		break;
	case 7:
		cout << "seven";
		break;
	case 8:
		cout << "eight";
		break;
	case 9:
		cout << "nine";
		break;
	}
	cout << " year";
}

void task_17(int num)
{
	if (10 < num && num < 20)
	{
		switch (num)
		{
		case 11:
			cout << "eleven";
			break;
		case 12:
			cout << "twelve";
			break;
		case 13:
			cout << "thirteen";
			break;
		case 14:
			cout << "fourteen";
			break;
		case 15:
			cout << "fifteen";
			break;
		case 16:
			cout << "sixteen";
			break;
		case 17:
			cout << "seventeen";
			break;
		case 18:
			cout << "eighteen";
			break;
		case 19:
			cout << "nineteen";
			break;
		}
	}
	else
	{
		int first = num / 10;
		int second = num % 10;
		switch (first)
		{
		case 1:
			cout << "ten";
			break;
		case 2:
			cout << "twenty";
			break;
		case 3:
			cout << "thirty";
			break;
		case 4:
			cout << "forty";
			break;
		}
		cout << ' ';
		switch (second)
		{
		case 1:
			cout << "one";
			break;
		case 2:
			cout << "two";
			break;
		case 3:
			cout << "three";
			break;
		case 4:
			cout << "four";
			break;
		case 5:
			cout << "five";
			break;
		case 6:
			cout << "six";
			break;
		case 7:
			cout << "seven";
			break;
		case 8:
			cout << "eight";
			break;
		case 9:
			cout << "nine";
			break;
		}
		cout << " lessons";
	}
}

void task_18_digit(int digit)
{
	switch (digit)
	{
	case 1:
		cout << "one";
		break;
	case 2:
		cout << "two";
		break;
	case 3:
		cout << "three";
		break;
	case 4:
		cout << "four";
		break;
	case 5:
		cout << "five";
		break;
	case 6:
		cout << "six";
		break;
	case 7:
		cout << "seven";
		break;
	case 8:
		cout << "eight";
		break;
	case 9:
		cout << "nine";
		break;
	}
}
void task_18(int num)
{
	int first = num / 100;
	int second = (num / 10) % 10;
	int third = num % 10;
	task_18_digit(first);
	cout << " hundred ";
	switch (second)
	{
	case 1:
		cout << "ten";
		break;
	case 2:
		cout << "twenty";
		break;
	case 3:
		cout << "thirty";
		break;
	case 4:
		cout << "forty";
		break;
	case 5:
		cout << "fifty";
		break;
	case 6:
		cout << "sixty";
		break;
	case 7:
		cout << "seventy";
		break;
	case 8:
		cout << "eighty";
		break;
	case 9:
		cout << "ninety";
		break;
	}
	cout << ' ';
	task_18_digit(third);
}

void task_19(int year)
{
	int difference = abs(year - 1984) % 60;
	int cycle = difference / 12;
	int animal = difference / 5;
	// Cycle
	switch (cycle)
	{
	case 0:
		cout << "green";
		break;
	case 1:
		cout << "red";
		break;
	case 2:
		cout << "yellow";
		break;
	case 3:
		cout << "white";
		break;
	case 4:
		cout << "dark";
		break;
	}
	cout << ' ';
	// Animal
	switch (animal)
	{
	case 0:
		cout << "rat";
		break;
	case 1:
		cout << "cow";
		break;
	case 2:
		cout << "tiger";
		break;
	case 3:
		cout << "rabbit";
		break;
	case 4:
		cout << "dragon";
		break;
	case 5:
		cout << "snake";
		break;
	case 6:
		cout << "horse";
		break;
	case 7:
		cout << "sheep";
		break;
	case 8:
		cout << "monkey";
		break;
	case 9:
		cout << "chicken";
		break;
	case 10:
		cout << "dog";
		break;
	case 11:
		cout << "pig";
		break;
	}
	cout << "'s year";
}

bool task_20_between_dates(int lowerDay, int lowerMonth, int currentDay, int currentMonth, int higherDay, int higherMonth)
{
	int lower = lowerDay + lowerMonth * 30;
	int higher = higherDay + higherMonth * 30;
	int current = currentDay + currentMonth * 30;
	return lower <= current && current <= higher;
}
void task_20(int day, int month)
{
	int number;
	if (task_20_between_dates(20, 1, day, month, 18, 2))
		number = 1;
	else if (task_20_between_dates(19, 2, day, month, 20, 3))
		number = 2;
	else if (task_20_between_dates(21, 3, day, month, 19, 4))
		number = 3;
	else if (task_20_between_dates(20, 4, day, month, 20, 5))
		number = 4;
	else if (task_20_between_dates(21, 5, day, month, 21, 6))
		number = 5;
	else if (task_20_between_dates(22, 6, day, month, 22, 7))
		number = 6;
	else if (task_20_between_dates(23, 7, day, month, 22, 8))
		number = 7;
	else if (task_20_between_dates(23, 8, day, month, 22, 9))
		number = 8;
	else if (task_20_between_dates(23, 9, day, month, 22, 10))
		number = 9;
	else if (task_20_between_dates(23, 10, day, month, 22, 11))
		number = 10;
	else if (task_20_between_dates(23, 11, day, month, 21, 12))
		number = 11;
	else
		number = 12;

	switch (number)
	{
	case 1:
		cout << "Aquarius";
		break;
	case 2:
		cout << "Pisces";
		break;
	case 3:
		cout << "Aries";
		break;
	case 4:
		cout << "Taurus";
		break;
	case 5:
		cout << "Gemini";
		break;
	case 6:
		cout << "Cancer";
		break;
	case 7:
		cout << "Lion";
		break;
	case 8:
		cout << "Virgo";
		break;
	case 9:
		cout << "Libra";
		break;
	case 10:
		cout << "Scorpio";
		break;
	case 11:
		cout << "Sagittarius";
		break;
	case 12:
		cout << "Capricorn";
		break;
	}
}
} // namespace Case