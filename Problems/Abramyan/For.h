#pragma once

/*
    Author RayDarar

    Solutions for Abramyan 4.5

    Module For
*/
#include <iostream>
#include <ctime>

namespace For
{
using namespace std;
void task_1(int k, unsigned n)
{
    for (unsigned i = 0; i < n; cout << k << endl, i++)
        ;
}
void task_2(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; cout << i << endl, i++, count++)
        ;
    cout << endl
         << count;
}
void task_3(int a, int b)
{
    int count = 0;
    for (int i = b; i >= a; cout << i << endl, i--, count++)
        ;
    cout << endl
         << count;
}
void task_4(int price)
{
    for (unsigned i = 1; i <= 10; cout << i * price << endl, i++)
        ;
}
void task_5(int price)
{
    for (float i = 0.1; i <= 1.1; cout << i * price << endl, i += 0.1)
        ;
}
void task_6(int price)
{
    for (float i = 1.2; i <= 2.2; cout << i * price << endl, i += 0.2)
        ;
}
void task_7(int a, int b)
{
    int sum = 0;
    for (size_t i = a; i <= b; sum += i, i++)
        ;
    cout << sum;
}
void task_8(int a, int b)
{
    int result = 1;
    for (size_t i = a; i <= b; result *= i, i++)
        ;
    cout << result;
}
void task_9(int a, int b)
{
    int result = 1;
    for (size_t i = a; i <= b; result += pow(i, 2), i++)
        ;
    cout << result;
}
void task_10(int n)
{
    float result = 1;
    for (unsigned i = 2; i <= n; result += 1.0 / i, i++)
        ;
    cout << result;
}
void task_11(int n)
{
    int result = 0;
    for (unsigned i = 0; i <= n; result += pow(n + i, 2), i++)
        ;
    cout << result;
}
void task_12(int n)
{
    float result = 1;
    unsigned i1 = 0;
    for (float i = 1.1; i1 < n; result *= i, i += 0.1, i1++)
        ;
    cout << result;
}
void task_13(int n)
{
    float result = 0;
    float item = 1.1;
    int sign = 1;
    for (unsigned i = 0; i < n; result += item * sign, sign *= -1, i++)
        ;
    cout << result;
}
void task_14(int n)
{
    unsigned result = 0;
    for (unsigned i = 1; i <= n; result += (2 * i - 1), cout << result << endl, i++)
        ;
}
void task_15(int A, int n)
{
    int result = 1;
    for (unsigned i = 0; i < n; result *= A, i++)
        ;
    cout << result;
}
void task_16(int A, int n)
{
    for (unsigned i = 1; i <= n; cout << pow(A, i) << endl, i++)
        ;
}
void task_17(int A, int n)
{
    int result = 0;
    for (size_t i = 0; i < n; result += pow(A, i), i++)
        ;
    cout << result;
}
void task_18(int A, int n)
{
    int result = 0;
    int sign = 1;
    for (size_t i = 0; i < n; result += pow(A, i) * sign, i++, sign *= -1)
        ;
    cout << result;
}
void task_19(int n)
{
    double result = 1;
    for (unsigned i = 1; i <= n; result *= i, i++)
        ;
    cout << result;
}
long fact(unsigned n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * fact(n - 1);
}
void task_20(int n)
{
    double result = 0;
    for (unsigned i = 1; i <= n; result += fact(i), i++)
        ;
    cout << result;
}
void task_21(int n)
{
    double result = 0;
    for (unsigned i = 0; i <= n; result += 1.0 / fact(i), i++)
        ;
    cout << result;
}
void task_22(int x, int n)
{
    double result = 0;
    for (unsigned i = 0; i <= n; result += pow(x, i) / fact(i), i++)
        ;
    cout << result;
}
void task_23(int x, int n)
{
    double result = 0;
    int sign = 1;
    for (unsigned i = 0; i <= n; result += sign * pow(x, 2 * i + 1) / fact(2 * i + 1), sign *= -1, i++)
        ;
    cout << result;
}
void task_24(int x, int n)
{
    double result = 0;
    int sign = 1;
    for (unsigned i = 0; i <= n; result += sign * pow(x, 2 * i) / fact(2 * i), sign *= -1, i++)
        ;
    cout << result;
}
void task_25(float x, int n)
{
    double result = 0;
    int sign = 1;
    for (unsigned i = 1; i <= n; result += sign * pow(x, i) / i, sign *= -1, i++)
        ;
    cout << result;
}
void task_26(float x, int n)
{
    double result = 0;
    int sign = 1;
    for (unsigned i = 1; i <= n; result += sign * pow(x, 2 * i + 1) / (2 * i + 1), sign *= -1, i++)
        ;
    cout << result;
}
long negative_sequence_27(int n, int i = 1, int result = 1)
{
    if (i == n + 1)
        return 1;
    return i * negative_sequence_27(n, ++i, result * (2 * i - 1));
}
long positive_sequence_27(int n, int i = 1, int result = 1)
{
    if (i == n + 1)
        return 2 * n + 1;
    return i * positive_sequence_27(n, ++i, result * (2 * i));
}
void task_27(float x, int n)
{
    double result = 0;
    for (unsigned i = 1; i <= n; result += negative_sequence_27(i) * pow(x, 2 * i + 1) / positive_sequence_27(i), i++)
        ;
    cout << result;
}
long odd_sequence_28(int n)
{
    long result = 1;
    for (unsigned i = 1; i < 2 * n - 1; result *= i, i += 2)
        ;
    return result;
}
long even_sequence_28(int n)
{
    long result = 1;
    for (unsigned i = 2; i <= 2 * n; result *= i, i += 2)
        ;
    return result;
}
void task_28(float x, int n)
{
    double result = 1;
    int sign = 1;
    for (unsigned i = 1; i <= n; result += sign * odd_sequence_28(i) * pow(x, i) / even_sequence_28(i), sign *= -1, i++)
        ;
    cout << result;
}
void task_29(int n, float a, float b)
{
    float h = abs(a - b) / n;
    cout << h << endl;
    for (unsigned i = 0; i <= n; cout << a + i * h << ' ', i++)
        ;
}
long function_30(float x)
{
    return 1 - sin(x);
}
void task_30(int n, float a, float b)
{
    float h = abs(a - b) / n;
    cout << h << endl;
    for (unsigned i = 0; i <= n; cout << function_30(a + i * h) << ' ', i++)
        ;
}
void task_31(int n)
{
    double item = 2;
    for (unsigned k = 1; k <= n; item = 2 + 1 / item, cout << item << ' ', k++)
        ;
}
void task_32(int n)
{
    double item = 1;
    for (unsigned k = 1; k <= n; item = (item + 1) / k, cout << item << ' ', k++)
        ;
}
void task_33(int n)
{
    long item_1 = 1, item_2 = 1;
    cout << 1 << ' ' << 1 << ' ';
    for (int i = 0; i < n - 2; i++)
    {
        long temp = item_1;
        item_1 = item_1 + item_2;
        item_2 = temp;
        cout << item_1 << ' ';
    }
}
void task_34(int n)
{
    double item_1 = 2, item_2 = 1;
    cout << 1 << ' ' << 2 << ' ';
    for (int i = 0; i < n - 2; i++)
    {
        double temp = item_1;
        item_1 = (item_1 + 2 * item_2) / 3;
        item_2 = temp;
        cout << item_1 << ' ';
    }
}
void task_35(int n)
{
    long item_1 = 1, item_2 = 2, item_3 = 1;
    cout << 1 << ' ' << 2 << ' ' << 3 << ' ';
    for (int i = 0; i < n - 2; i++)
    {
        long temp = item_1;
        item_1 = item_1 + item_2;
        item_2 = temp;
        cout << item_1 << ' ';
    }
}
void task_36(int n, int k)
{
    long result = 0;
    for (unsigned i = 1; i <= n; i++)
    {
        int power = i;
        for (unsigned j = 1; j < k; power *= i, j++)
            ;
        result += power;
    }
    cout << result;
}
void task_37(int n)
{
    long result = 0;
    for (unsigned i = 1; i <= n; i++)
    {
        int power = i;
        for (unsigned j = 1; j < i; power *= i, j++)
            ;
        result += power;
    }
    cout << result;
}
void task_38(int n)
{
    long result = 0;
    for (unsigned i = 1; i <= n; i++)
    {
        int power = i;
        for (unsigned j = 1; j < n - i + 1; power *= i, j++)
            ;
        result += power;
    }
    cout << result;
}
void task_39(int a, int b)
{
    for (unsigned i = a; i <= b; i++)
    {
        for (unsigned j = 0; j < i; j++)
            cout << i << ' ';
        cout << endl;
    }
}
void task_40(int a, int b)
{
    for (unsigned i = a, counter = 1; i <= b; i++, counter++)
    {
        for (unsigned j = 0; j < counter; j++)
            cout << i << ' ';
        cout << endl;
    }
}
} // namespace For
