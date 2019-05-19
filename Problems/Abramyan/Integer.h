#pragma once

/*
    Author RayDarar

    Solutions for Abramyan 4.5

    Module Integer
*/

#include <stdio.h>

namespace Integer
{
void task_1(int cm)
{
    printf("Meters: %d", cm / 100);
}

void task_2(int kg)
{
    printf("Tonnes: %d", kg / 1000);
}

void task_3(int bytes)
{
    printf("Kilobytes: %d", bytes / 1024);
}

void task_4(int a, int b)
{
    printf("%d / %d: %d", a, b, a / b);
}

void task_5(int a, int b)
{
    printf("%d %% %d: %d", a, b, a % b);
}

void task_6(int number)
{
    printf("%d | %d", number / 10, number % 10);
}

void task_7(int number)
{
    int left = number / 10;
    int right = number % 10;

    printf("Sum: %d | Product: %d", left + right, left * right);
}

void task_8(int number)
{
    printf("%d%d", number % 10, number / 10);
}

void task_9(int number)
{
    printf("First digit: %d", number % 100);
}

void task_10(int number)
{
    printf("Last digit: %d | Middle digit: %d", number % 10, (number / 10) % 10);
}

void task_11(int number)
{
    int first = number / 100;
    int second = (number / 10) % 10;
    int third = number % 10;

    printf("Sum: %d | Product: %d", first + second + third, first * second * third);
}

void task_12(int number)
{
    int first = number / 100;
    int second = (number / 10) % 10;
    int third = number % 10;
    number = third * 100 + second * 10 + first;

    printf("Number: %d", number);
}

void task_13(int number)
{
    int first = number / 100;
    number = number % 100;
    number = number * 10 + first;

    printf("Number: %d", number);
}

void task_14(int number)
{
    int last = number % 10;
    number = last * 100 + number / 10;

    printf("Number: %d", number);
}

void task_15(int number)
{
    int first = number / 100;
    int second = (number / 10) % 10;
    int third = number % 10;
    number = second * 100 + first * 10 + third;

    printf("Number: %d", number);
}

void task_16(int number)
{
    int first = number / 100;
    int second = (number / 10) % 10;
    int third = number % 10;
    number = first * 100 + third * 10 + second;

    printf("Number: %d", number);
}

void task_17(int number)
{
    int hundreds = (number / 100) % 10;

    printf("Hundreds: %d", hundreds);
}

void task_18(int number)
{
    int thousands = (number / 1000) % 10;

    printf("Thousands: %d", thousands);
}

void task_19(int seconds)
{
    int minutes = seconds / 60;

    printf("Minutes: %d", minutes);
}

void task_20(int seconds)
{
    int hours = seconds / 3600;

    printf("Hours: %d", hours);
}

void task_21(int seconds)
{
    int lastSeconds = seconds % 60;

    printf("Last seconds: %d", lastSeconds);
}

void task_22(int seconds)
{
    int lastSeconds = seconds % 3600;

    printf("Last seconds: %d", lastSeconds);
}

void task_23(int seconds)
{
    int minutes = seconds / 60;
    int lastMinutes = minutes % 60;

    printf("Last minutes: %d", lastMinutes);
}

#define dayOfWeek_sunday(n) n == 0 ? "sunday" : (n == 1 ? "monday" : (n == 2 ? "tuesday" : (n == 3 ? "wednesday" : (n == 4 ? "thursday" : (n == 5 ? "friday" : "saturday")))))
void task_24(int k)
{
    // Jan 1 was monday
    k += 0; // That'll be monday
    int num = k % 7;

    printf("Day: %s", dayOfWeek_sunday(num));
}

void task_25(int k)
{
    // Jan 1 was thursday
    k += 3; // That'll be thursday
    int num = k % 7;

    printf("Day: %s", dayOfWeek_sunday(num));
}

#define dayOfWeek_monday(n) n == 0 ? "monday" : (n == 1 ? "tuesday" : (n == 2 ? "wednesday" : (n == 3 ? "thursday" : (n == 4 ? "friday" : (n == 5 ? "saturday" : "sunday")))))
void task_26(int k)
{
    // Jan 1 was tuesday
    k += 0; // That'll be tuesday
    int num = k % 7;

    printf("Day: %s", dayOfWeek_monday(num));
}

void task_27(int k)
{
    // Jan 1 was saturday
    k += 4; // That'll be saturday
    int num = k % 7;

    printf("Day: %s", dayOfWeek_monday(num));
}

void task_28(int k, int n)
{
    // Jan 1 was n-th day of week
    k += n - 2; // That'll be n-th day of week
    int num = k % 7;

    printf("Day: %s", dayOfWeek_monday(num));
}

void task_29(int a, int b, int c)
{
    int areaAB = a * b;
    int areaC = c * c;

    int inside = areaAB / areaC;
    int empty = areaAB % areaC;

    printf("There's %d squares inside and %d space is empty", inside, empty);
}

void task_30(int year)
{
    int century = (year - 1) / 100 + 1;

    printf("Century: %d", century);
}
} // namespace Integer