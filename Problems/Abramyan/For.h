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


} // namespace For
