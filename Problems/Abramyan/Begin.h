#pragma once

/*
    Author RayDarar

    Solutions for Abramyan 4.5

    Module Begin
*/

#include <stdio.h>
#include <cmath>

namespace Begin
{
void task_1(double a)
{
    printf("Square's perimeter is %.2f", 4 * a);
}

void task_2(double a)
{
    printf("Square's area is %.2f", a * a);
}

void task_3(double a, double b)
{
    printf("Rectangle's perimeter is %.2f and area is %.2f", 2 * (a + b), a * b);
}

void task_4(double d)
{
    printf("Circle's length is %.2f", d * 3.14);
}

void task_5(double a)
{
    printf("Cube's volume is %.2f and it's surface area is %.2f", a * a * a, 6 * a * a);
}

void task_6(double a, double b, double c)
{
    printf("Cuboid's volume is %.2f and it's surface area is %.2f", a * b * c, 2 * (a * b + b * c + c * a));
}

void task_7(double r)
{
    printf("Circle's length is %.2f and it's area is %.2f", 2 * 3.14 * r, 3.14 * r * r);
}

void task_8(double a, double b)
{
    printf("Arithmetic average: %.2f", (a + b) / 2);
}

void task_9(double a, double b)
{
    printf("Geometric mean: %.2f", sqrt(a * b));
}

void task_10(double a, double b)
{
    printf("Sum: %.2f\nDifference: %.2f\nProduct: %.2f\nPrivate of their squares: %.2f", a + b, a - b, a * b, pow(a, 2) / pow(b, 2));
}

void task_11(double a, double b)
{
    printf("Sum: %.2f\nDifference: %.2f\nProduct: %.2f\nPrivate of their squares: %.2f", a + b, a - b, a * b, fabs(a) / fabs(b));
}

void task_12(double a, double b)
{
    double c = sqrt(a * a + b * b);
    printf("Hypotenuse: %.2f\nPerimeter: %.2f", c, a + b + c);
}

void task_13(double r1, double r2)
{
    double s1 = 3.14 * r1 * r1;
    double s2 = 3.14 * r2 * r2;
    double s3 = s1 - s2;
    printf("Circle 1's area: %.2f\nCircle 2's area: %.2f\nCircle 3's area: %.2f", s1, s2, s3);
}

void task_14(double l)
{
    double r = l / 2 * 3.14;
    double s = 3.14 * r * r;
    printf("Circle's radius is %.2f and area is %.2f", r, s);
}

void task_15(double s)
{
    double d = sqrt(s / 3.14) * 2;
    double l = 3.14 * d;
    printf("Circle's diameter is %.2f and length is %.2f", d, l);
}

void task_16(double x1, double x2)
{
    printf("Distance between two points: %.2f", abs(x1 - x2));
}

void task_17(double a, double b, double c)
{
    double ac = abs(a - c);
    double bc = abs(b - c);
    printf("AB: %2.f\nBC: %.2f\nSum: %.2f", ac, bc, ac + bc);
}

void task_18(double a, double b, double c)
{
    double ac = abs(a - c);
    double bc = abs(b - c);
    printf("Product of AC and BC: %.2f", ac * bc);
}

void task_19(double x1, double y1, double x2, double y2)
{
    double a = y2 - y1;
    double b = x2 - x1;

    printf("Rectangle's perimeter is %.2f and area is %.2f", 2 * (a + b), a * b);
}

void task_20(double x1, double y1, double x2, double y2)
{
    printf("Distance between two points: %.2f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}

#define distance(x1, y1, x2, y2) sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2))
void task_21(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    double p = a + b + c;
    double s = sqrt(p / 2 * (p / 2 - a) * (p / 2 - b) * (p / 2 - c));

    printf("Triangle's perimeter is %.2f and area is %.2f", p, s);
}

void task_22(double a, double b)
{
    printf("A | B : %.2f | %.2f\n", a, b);

    double temp = a;
    a = b;
    b = temp;

    printf("A | B : %.2f | %.2f", a, b);
}

void task_23(double a, double b, double c)
{
    printf("A | B | C: %.2f | %.2f | %.2f", a, b, c);

    double temp = b, temp1 = c;
    b = a;
    c = temp;
    a = temp1;

    printf("\nA | B | C: %.2f | %.2f | %.2f", a, b, c);
}

void task_24(double a, double b, double c)
{
    printf("A | B | C: %.2f | %.2f | %.2f", a, b, c);

    double temp = b, temp1 = c;
    c = a;
    b = temp1;
    a = temp;

    printf("\nA | B | C: %.2f | %.2f | %.2f", a, b, c);
}

void task_25(double x)
{
    printf("y = 3x^6 - 6x^2 - 7\ny(%.2f) = %.2f", x, 3 * pow(x, 6) - 6 * pow(x, 2) - 7);
}

void task_26(double x)
{
    printf("y = 4(x−3)^6 − 7(x−3)^3 + 2\ny(%.2f) = %.2f", x, 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2);
}

void task_27(double a)
{
    a *= a; // A ^ 2
    printf("A^2: %.2f\n", a);

    a *= a; // A ^ 4
    printf("A^2: %.2f\n", a);

    a *= a; // A ^ 8
    printf("A^2: %.2f\n", a);
}

void task_28(double a)
{
    double temp2 = a * a; // A^2
    printf("A^2: %.2f\n", temp2);

    double temp3 = temp2 * a; // A^3
    printf("A^3: %.2f\n", temp3);

    a = temp3 * temp2; // A^5
    printf("A^5: %.2f\n", a);

    temp2 = a * a; // A^10
    printf("A^10: %.2f\n", temp2);

    temp3 = temp2 * a; // A^15
    printf("A^10: %.2f\n", temp3);
}

void task_29(double alpha)
{
    printf("Radians: %.2f", 3.14 * alpha / 180);
}

void task_30(double radian)
{
    printf("Angle: %.2f", radian * 180 / 3.14);
}

void task_31(double t)
{
    printf("Celsius: %.2f", (t - 32) * 5 / 9);
}

void task_32(double t)
{
    printf("Fahrenheit: %.2f", 9 * t / 5 + 32);
}

void task_33(double x, double a, double y)
{
    double a1 = a / x;
    printf("1 kg | y kg costs: %.2f | %.2f", 1 * a1, y * a1);
}

void task_34(double x, double a, double y, double b)
{
    double a1 = a / x;
    double b1 = b / y;

    printf("1 kg costs: %.2f | %.2f\nGreater: %.2f", 1 * a1, 1 * b1, a1 / b1);
}

void task_35(double v, double u, double t1, double t2)
{
    double s1 = v * t1;
    double s2 = (v - u) * t2;

    printf("Path: %.2f", s1 + s2);
}

void task_36(double v1, double v2, double s, double t)
{
    double s1 = v1 * t;
    double s2 = v2 * t;

    printf("Path: %.2f", s + s1 + s2);
}

void task_37(double v1, double v2, double s, double t)
{
    double s1 = v1 * t;
    double s2 = v2 * t;

    printf("Path: %.2f", abs(s - s1 - s2));
}

void task_38(double a, double b)
{
    double x = -a / b;

    printf("%.2fa + %.2f = 0 | x = %.2f", a, b, x);
}

void task_39(double a, double b, double c)
{
    double d = pow(b, 2) - 4 * a * c;
    double x1 = (-b + sqrt(d)) / 2 * a;
    double x2 = (-b - sqrt(d)) / 2 * a;

    printf("%.2fx^2 + %.2fx + %.2f = 0 | x1 = %.2f | x2 = %.2f", a, b, c, x1, x2);
}

void task_40(double a1, double b1, double c1, double a2, double b2, double c2)
{
    double d = a1 * b2 - a2 * b1;
    double x = (c1 * b2 - c2 * b1) / d;
    double y = (a1 * c2 - a2 * c1) / d;

    printf("| %.2fx + %.2fy = %.2f\n| %.2fx + %.2fy = %.2f\n\nx = %.2f | y = %.2f", a1, b1, c1, a2, b2, c2, x, y);
}
} // namespace Begin