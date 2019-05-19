#pragma once

/*
    Author RayDarar

    Solutions for Abramyan 4.5

    Module Boolean
*/

#include <iostream>
#include <cmath>

namespace Boolean
{
#define bout(condition) std::cout << (condition ? "True" : "False")
void task_1(int a)
{
    bout(a >= 0);
}

void task_2(int a)
{
    bout(a % 2 != 0);
}

void task_3(int a)
{
    bout(a % 2 == 0);
}

void task_4(int a, int b)
{
    bout(a > 2 && b <= 3);
}

void task_5(int a, int b)
{
    bout(a >= 0 || b < -2);
}

void task_6(int a, int b, int c)
{
    bout(a < b && b < c);
}

void task_7(int a, int b, int c)
{
    bout(a < b && b < c);
}

void task_8(int a, int b)
{
    bout(a % 2 != 0 && b % 2 != 0);
}

void task_9(int a, int b)
{
    bout(a % 2 != 0 || b % 2 != 0);
}

void task_10(int a, int b)
{
    bout(a % 2 != 0 ^ b % 2 != 0);
}

void task_11(int a, int b)
{
    bout((a + b) % 2 == 0);
}

void task_12(int a, int b, int c)
{
    bout(a >= 0 && b >= 0 && c >= 0);
}

void task_13(int a, int b, int c)
{
    bout((a >= 0 ^ b >= 0) ^ c >= 0);
}

void task_14(int a, int b, int c)
{
    bout((a >= 0 ^ b >= 0) ^ c >= 0);
}

void task_15(int a, int b, int c)
{
    bool x = a >= 0, y = b >= 0, z = c >= 0;
    bout(x && (y + z) || y && z);
}

void task_16(int n)
{
    bout(n % 2 == 0 && (9 < n && n < 100));
}

void task_17(int n)
{
    bout(n % 2 != 0 && (99 < n && n < 1000));
}

void task_18(int a, int b, int c)
{
    bool x = a == b, y = b == c, z = a == c;
    bout(x || y || z);
}

void task_19(int a, int b, int c)
{
    bool x = a == -b, y = b == -c, z = a == -c;
    bout(x || y || c);
}

void task_20(int number)
{
    int first = number / 100;
    int second = (number / 10) % 10;
    int third = number % 10;

    bool x = first != second, y = second != third, z = first != third;

    bout(x && y && z);
}

void task_21(int number)
{
    int first = number / 100;
    int second = (number / 10) % 10;
    int third = number = number % 10;
    bool a = second == first + 1;
    bool b = third == second + 1;
    bout(a && b);
}

void task_22(int number)
{
    int first = number / 100;
    int second = (number / 10) % 10;
    int third = number = number % 10;
    bool a = first + 1 == second;
    bool b = second + 1 == third;

    bool c = first == second + 1;
    bool d = second == third + 1;
    bout(a && b || c && d);
}

void task_23(int number)
{
    int first = number / 1000;
    int second = (number / 100) % 10;
    int third = (number / 10) % 10;
    int fourth = number % 10;

    int left = first * 1000 + second * 100 + third * 10 + fourth;
    int right = fourth * 1000 + third * 100 + second * 10 + first;

    bout(left == right);
}

void task_24(int a, int b, int c)
{
    float d = b * b - 4 * a * c;

    bout(d > 0);
}

void task_25(int x, int y)
{
    bout(y > 0 && x < 0);
}

void task_26(int x, int y)
{
    bout(x > 0 && y < 0);
}

void task_27(int x, int y)
{
    bout((y > 0 && x < 0) || (x < 0 && y < 0));
}

void task_28(int x, int y)
{
    bout((x > 0 && y > 0) || (x > 0 && y < 0));
}

void task_29(int x, int y, int x1, int y1, int x2, int y2)
{
    bout((x2 <= x && x <= x1) && (y1 <= y && y <= y2));
}

void task_30(int a, int b, int c)
{
    bout(a == b == c);
}

void task_31(int a, int b, int c)
{
    bool x = a == b && b != c;
    bool y = b == c && c != a;
    bool z = a == c && c != b;

    bout(x || y || z);
}

#define calcHypo(a, b) ((int)sqrt(a * a + b * b))
void task_32(int a, int b, int c)
{
    bool x = a == calcHypo(b, c);
    bool y = b == calcHypo(a, c);
    bool z = c == calcHypo(a, b);

    bout(x || y || z);
}

void task_33(int a, int b, int c)
{
    bool x = a <= b + c;
    bool y = b <= a + c;
    bool z = c <= a + b;

    bout(x && y && z);
}

// true - white, false - black
#define calcColor(x, y) (x % 2 == 0 && y % 2 != 0) || (x % 2 != 0 && y % 2 == 0)
void task_34(int x, int y)
{
    bool color = calcColor(x, y);

    bout(color);
}

void task_35(int x1, int y1, int x2, int y2)
{
    bool color1 = calcColor(x1, y1);
    bool color2 = calcColor(x2, y2);

    bout(color1 == color2);
}

void task_36(int x1, int y1, int x2, int y2)
{
    bool result = x1 == x2 || y1 == y2;

    bout(result);
}

void task_37(int x1, int y1, int x2, int y2)
{
    bool result = abs(x1 - x2) <= 1 && abs(y1 - y2) <= 1;

    bout(result);
}

void task_38(int x1, int y1, int x2, int y2)
{
    bool result = abs(x1 - x2) == abs(y1 - y2);

    bout(result);
}

void task_39(int x1, int y1, int x2, int y2)
{
    bool result = (x1 == x2 || y1 == y2) || (abs(x1 - x2) == abs(y1 - y2));

    bout(result);
}

void task_40(int x1, int y1, int x2, int y2)
{
    bool result = abs(x1 - x2) == 2 && abs(y1 - y2) == 1 || abs(x1 - x2) == 1 && abs(y1 - y2) == 2;

    bout(result);
}
} // namespace Boolean