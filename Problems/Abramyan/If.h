#pragma once

/*
    Author RayDarar

    Solutions Abramyan 4.5

    Module If
*/

#include <iostream>

namespace If {
	using namespace std;
	void task_1(int n) {
		if (n > 0)
			n++;

		cout << n;
	}

	void task_2(int n) {
		if (n > 0)
			n++;
		else
			n -= 2;

		cout << n;
	}

	void task_3(int n) {
		if (n > 0)
			n++;
		else if (n == 0)
			n = 10;
		else
			n -= 2;

		cout << n;
	}

	void task_4(int a, int b, int c) {
		int positive = 0;
		if (a > 0)
			positive++;
		if (b > 0)
			positive++;
		if (c > 0)
			positive++;

		cout << positive;
	}

	void task_5(int a, int b, int c) {
		int positive = 0, negative = 0;
		if (a > 0)
			positive++;
		if (b > 0)
			positive++;
		if (c > 0)
			positive++;

		if (a < 0)
			negative++;
		if (b < 0)
			negative++;
		if (c < 0)
			negative++;

		cout << positive << ' ' << negative;
	}

	void task_6(int a, int b) {
		if (a < b)
			swap(a, b);

		cout << a;
	}

	void task_7(int a, int b) {
		if (a < b)
			cout << 0;
		else
			cout << 1;
	}

	void task_8(int a, int b) {
		if (a < b)
			cout << b << ' ' << a;
		else
			cout << a << ' ' << b;
	}

	void task_9(int a, int b) {
		if (a < b)
			swap(a, b);
		cout << a << ' ' << b;
	}

	void task_10(int a, int b) {
		if (a != b) {
			int temp = a + b;
			a = temp;
			b = temp;
		}
		else {
			a = 0;
			b = 0;
		}

		cout << a << ' ' << b;
	}

	void task_11(int a, int b) {
		if (a != b) {
			int temp = a < b ? b : a;
			a = temp;
			b = temp;
		}
		else {
			a = 0;
			b = 0;
		}
		cout << a << ' ' << b;
	}

	void task_12(int a, int b, int c) {
		int min = a < b ? (a < c ? a : c) : (b < c ? b : c);
		cout << min;
	}

	void task_13(int min, int middle, int max) {
		if (min <= middle && middle <= max)
			cout << middle;
		else if (min > middle)
			task_13(middle, min, max);
		else if (middle > max)
			task_13(min, max, middle);
	}

	void task_14(int min, int middle, int max) {
		if (min <= middle && middle <= max)
			cout << min << ' ' << max;
		else if (min > middle)
			task_13(middle, min, max);
		else if (middle > max)
			task_13(min, max, middle);
	}

	void task_15(int min, int middle, int max) {
		if (min <= middle && middle <= max)
			cout << middle + max;
		else if (min > middle)
			task_13(middle, min, max);
		else if (middle > max)
			task_13(min, max, middle);
	}

	void task_16(int a, int b, int c) {
		if (a <= b && b <= c)
			a *= b *= c *= 2;
		else
			a *= b *= c *= -1;

		cout << a << ' ' << b << ' ' << c;
	}

	void task_17(int a, int b, int c) {
		if ((a <= b && b <= c) || (c <= b && b <= a))
			a *= b *= c *= 2;
		else
			a *= b *= c *= -1;

		cout << a << ' ' << b << ' ' << c;
	}

	void task_18(int a, int b, int c) {
		if (b == c)
			cout << 1;
		else if (a == c)
			cout << 2;
		else
			cout << 3;
	}

	void task_19(int a, int b, int c, int d) {
		if (b == c && c == d)
			cout << 1;
		else if (a == c && c == d)
			cout << 2;
		else if (a == b && b == d)
			cout << 3;
		else
			cout << 4;
	}

	void task_20(int a, int b, int c) {
		if (abs(a - b) < abs(a - c))
			cout << b << ' ' << abs(a - b);
		else
			cout << c << ' ' << abs(a - c);
	}

	void task_21(int x, int y) {
		if (x == 0 && y == 0)
			cout << 0;
		else if (x != 0 && y == 0)
			cout << 1;
		else if (x == 0 && y != 0)
			cout << 2;
		else
			cout << 3;
	}

	void task_22(int x, int y) {
		if (x > 0 && y > 0)
			cout << 1;
		else if (x < 0 && y > 0)
			cout << 2;
		else if (x < 0 && y < 0)
			cout << 3;
		else
			cout << 4;
	}

	void task_23(int x1, int y1, int x2, int y2, int x3, int y3) {
		int x4 = x3 - x1, y4 = y2 - y1;

		cout << x4 << ' ' << y4;
	}

	void task_24(int x) {
		if (x > 0)
			cout << 2 * std::sin(x);
		else
			cout << 6 - x;
	}

	void task_25(int x) {
		if (x < -2 || x > 2)
			cout << 2 * x;
		else
			cout << -3 * x;
	}

	void task_26(int x) {
		if (x <= 0)
			cout << -x;
		else if (0 < x && x < 2)
			cout << x * x;
		else
			cout << 4;
	}

	void task_27(int x) {
		if (x < 0)
			cout << 0;
		else if (x % 2 == 0)
			cout << 1;
		else
			cout << -1;
	}

	void task_28(int year) {
		if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
			cout << 1;
		else
			cout << 0;
	}

	void task_29(int number) {
		if (number > 0)
			cout << "positive ";
		else if (number < 0)
			cout << "negative ";
		else
			cout << "zero ";
		if (number % 2 == 0)
			cout << "even";
		else
			cout << "odd";
	}

	void task_30(int number) {
		if (number % 2 == 0)
			cout << "even ";
		else
			cout << "odd ";
		if (number / 100 != 0)
			cout << "three-digit number";
		else if (number / 10 != 0)
			cout << "two-digit number";
		else
			cout << "one-digit number";
	}
}