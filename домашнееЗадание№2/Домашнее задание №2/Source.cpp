﻿#define _USE_MATH_DEFINES //for Pi 

#include <iostream>
#include <cmath>

using namespace std;

//Задача КОНСУС
//int main()
//{
//	int h, R, r, l;
//
//	cout << "Caculator V and S of cone!" << endl;
//	cout << "Please enter h: ";
//	cin >> h;
//	cout << "Please enter R: ";
//	cin >> R;
//	cout << "Please enter r: ";
//	cin >> r;
//	l = sqrt(h*h + pow(R - r, 2));
//	cout << "l = " << l << endl;
//	cout << "V of cone = " << (float)1 / 3 * M_PI * h *(R*R + R * r + r * r) << endl;
//	cout << "S of cone = " << M_PI * (R*R + (R+r)*l + r*r) << endl;
//	system("pause");
//	return 0;
//}

//Задача РАЗВЕТВЛЕНИЕ
//int main()
//{
//	float a, x;  
//	cout << "Please enter a: ";
//	cin >> a;
//	cout << "Please enter x: ";
//	cin >> x;
//
//	if (abs(x) < 1)
//	{
//		cout << "w = " << a * log(abs(x)) << endl;
//	}
//	else
//	{
//		if ((a - x * x) < 0)
//		{
//			cout << "No root!" << endl;
//		}
//		else
//		{
//			cout << "w = " << sqrt((a - x * x)) << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//Задача ФУНКЦИЯ
//int main()
//{
//	float x, y, b;
//	cout << "Caculator function: z = ln(b-y) * abs(b-x)" << endl;
//	cout << "Please enter x: ";
//	cin >> x;
//	cout << "Please enter y: ";
//	cin >> y;
//	cout << "Please enter b: ";
//	cin >> b;
//
//	if ((b-y) < 0 || (b-x) < 0)
//	{
//		cout << "No roots" << endl;
//	}
//	else
//	{
//		cout << "z = " << log(b - y) * abs(b - x) << endl;
//	}	
//
//	system("pause");
//	return 0;
//}

//Задача ПОРЯДОК
int main()
{
	int n;
	cout << "Print out the next 10 numbers of n!" << endl;
	cout << "Please enter n: ";
	cin >> n;

	cout << "The next 10 numbers: ";
	if (n < 0) 
	{
		for (int i = 0; i < 10; i++)
		{
			cout << i << "\t";
		}
	}
	else
	{
		for (int i = 1; i <= 10; i++)
		{
			cout << n + i << "\t";
		}
	}
	

	system("pause");
	return 0;
}

//Задача ТАБУЛЯЦИЯ
//int main()
//{
//	cout << "Table of function: y = (x*x -2*x + 2) / (x -1) " << endl;
//
//	for (float i = -4; i <= 4; i += 0.5)
//	{
//		cout << "x =" << i << "\t | y = " << (i*i - 2 * i + 2) / (i - 1) << endl;
//	}
//
//	system("pause");
//	return 0;
//}