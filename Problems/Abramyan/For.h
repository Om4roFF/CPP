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
long fact(int n)
{
    return n == 1 ? 1 : n * fact(n - 1);
}
void task_20(int n)
{
    double result = 1;
    for (unsigned i = 1; i <= n; result += fact(i), i++)
        ;
    cout << result;
}
} // namespace For
