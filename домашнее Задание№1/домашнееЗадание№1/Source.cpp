#include<iostream>
#include<math.h>
using namespace std;

//задание ИМЯ
//int main()
//{
//	cout << "My name is Son, Vuong Truong Son!" << endl;
//
//	system("pause");
//	return 0;
//}

//задание АРИФМЕТИКА
//int main()
//{
//	float a, b;
//	
//	cout << "First number: ";
//	cin >> a;
//
//	cout << "Second number: ";
//	cin >> b;
//
//	cout << "Sum: " << a + b << endl;
//	cout << "Subtract: " << a - b << endl;
//	cout << "Multipl: " << a * b << endl;
//	
//	if (b == 0) {
//		cout << "Div: Error!";
//	} else {
//		cout << "Div: " << a / b << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//задание УРАВНЕНИЕ
//int main()
//{
//	float b, c, x;
//
//	cout << "Solve problem: bx + c = 0" << endl;
//	cout << "Please input b: ";
//	cin >> b;
//	cout << "Please input c: ";
//	cin >> c;
//
//	if (b == 0)
//	{
//		//0x + c = 0
//		if (c == 0)
//		{
//			cout << "Vo so nghiem" << endl;
//		} else {
//			cout << "No roots" << endl;
//		}
//		system("pause");
//		return 0;
//	}	
//	cout << "x = " << -c / b << endl;
//
//	system("pause");
//	return 0;
//}

//задание ЁЩЕ УРАВНЕНИЕ
//int main()
//{
//	float a, b, c;
//
//	cout << "Solve problem: ax^2 + bx + c = 0" << endl;
//	cout << "Please input a: ";
//	cin >> a;
//	cout << "Please input b: ";
//	cin >> b;
//	cout << "Please inut c: ";
//	cin >> c;
//
//	if (a == 0)
//	{
//		if (b == 0)
//		{
//			if (c == 0)
//			{
//				cout << "So many root" << endl;
//			}
//			else
//			{
//				cout << "No root" << endl;
//			}
//			return 0;
//		}
//		cout << "x = " << -c / b << endl;
//	}
//	else
//	{
//		float d = (b * b) - (4 * a * c); //Delta
//		
//		if (d > 0)
//		{
//			cout << "x1 = " << (-b + sqrt(d)) / (2 * a) << endl;
//			cout << "x2 = " << (-b - sqrt(d)) / (2 * a) << endl;
//		}
//		else if (d == 0)
//		{
//			cout << "x = " << -b / (2 * a) << endl;
//		}
//		else
//		{
//			cout << "No roots" << endl;
//		}
//
//	}
//
//	system("pause");
//	return 0;
//}

//задание Лампа со шторой
int main()
{
	bool window, day, lamp;
	
	cout << "Window close(1) or open(0)? (0/1): ";
	cin >> window;
	cout << "Day(1) or night(0)? (0/1): ";
	cin >> day;
	cout << "Lamp turn on(1) or turn off(0)? (0/1): ";
	cin >> lamp;

	if (window && day || lamp)
	{
		cout << "The room is light" << endl;
	}
	else
	{
		cout << "This room so dark" << endl;
	}

	system("pause");
	return 0;
}