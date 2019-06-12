#pragma once

/*
    Author RayDarar

    Solutions for Abramyan 4.5

    Module While
*/

#include <iostream>
using namespace std;

namespace While
{
void task_1(int a, int b)
{
    int iterator = 0;
    while (iterator < a)
        iterator += b;
    cout << iterator - a;
}
void task_2(int a, int b)
{
    int counter = 0, iterator = 0;
    while (iterator < a)
    {
        iterator += b;
        counter++;
    }
    cout << counter - 1;
}
void task_3(int n, int k)
{
    int counter = 0, iterator = 0;
    while (iterator < n)
    {
        iterator += k;
        counter++;
    }
    cout << counter - 1 << ' ' << iterator - n;
}
void task_4(int n)
{
    int power = 3;
    while (power <= n)
    {
        if (power == n)
        {
            cout << "TRUE";
            return;
        }
        power *= 3;
    }
    cout << "FALSE";
}
void task_5(int n)
{
    int power = 2, counter = 1;
    while (power != n)
    {
        power *= 2;
        counter++;
    }
    cout << counter;
}
void task_6(int n)
{
    long result = n;
    while (n > 2) {
        n -= 2;
        result *= n;
    }
    cout << result;
}
} // namespace While