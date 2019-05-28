#pragma once
#include <string>
#include <iostream>
using namespace std;

class Saltusha
{
private:
    int age;
    string name;

public:
    Saltusha() = default;
    Saltusha(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    // void print()
    // {
    //     cout << age << " | " << name;
    // }
};