#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string>
#include <windows.h>
#include <math.h>

#define WIDTH 60
#define HEIGHT 20
#define X WIDTH/2
#define Y HEIGHT/2
#define XMAX WIDTH-X-1
#define XMIN -(WIDTH-X)
#define YMAX HEIGHT-Y
#define YMIN -(HEIGHT-Y)+1
using namespace std;

const char CHAR_55 = 55;
const char CHAR_48 = 48;

char grid[HEIGHT][WIDTH];

int plot(int x, int y)
{
	if (x > XMAX || x < XMIN || y > YMAX || y < YMIN)
		return -1;

	grid[Y - y][X + x] = '*';
	return 1;
}
void init_grid(void)
{
	int x, y;

	for (y = 0; y < HEIGHT; y++)
		for (x = 0; x < WIDTH; x++)
			grid[y][x] = ' ';
	/* draw the axis */
	for (y = 0; y < HEIGHT; y++)
		grid[y][X] = '|';
	for (x = 0; x < WIDTH; x++)
		grid[Y][x] = '-';
	grid[Y][X] = '+';
}
void show_grid(void)
{
	int x, y;

	for (y = 0; y < HEIGHT; y++)
	{
		for (x = 0; x < WIDTH; x++)
			putchar(grid[y][x]);
		putchar('\n');
	}
}


void signX(int x)
{
	if (x > 0)
	{
		cout << "Sign x = 1" << endl;
	}
	else if (x == 0)
	{
		cout << "Sign x = 0" << endl;
	}
	else
	{
		cout << "Sign x = -1" << endl;
	}
	return;
}

int squareRectangle(int a, int b)
{
	return a * b;
}

float squareTriangle(int a, int h)
{
	return (float)1 / 2 * h * a;
}

double squareCircle(int r)
{
	double Pi = 3.14;
	return Pi * r * r;
}

int convertBase10toBaseb(int n, int b) 
{
	if (n < 0 || b < 2 || b > 16) 
	{
		cout << "Base number incorrect!" << endl;
		return 0;
	}
	int i;
	char arr[20];
	int count = 0;
	int m;
	int remainder = n;
	while (remainder > 0) 
	{
		if (b > 10) {
			m = remainder % b;
			if (m >= 10) 
			{
				arr[count] = (char)(m + CHAR_55);
				count++;
			}
			else 
			{
				arr[count] = (char)(m + CHAR_48);
				count++;
			}
		}
		else 
		{
			arr[count] = (char)((remainder % b) + CHAR_48);
			count++;
		}
		remainder = remainder / b;
	}

	for (i = count - 1; i >= 0; i--) 
	{
		cout << arr[i];
	}
	return 1;
}

//int main()
//{
//	int a[10];
//	ofstream fileOutput("c");
//
//	if (fileOutput.fail())
//	{
//		cout << "File cannot open!" << endl;
//		return 0;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << "Please input number " << i + 1 << ":";
//		cin >> a[i];
//		fileOutput << a[i];
//		fileOutput << "\t";
//	}
//
//	fileOutput.close();
//
//	ifstream fileInput("C:/Users/DELL/Desktop/homework4.txt");
//	string data;
//
//	if (fileInput.fail())
//	{
//		cout << "Cannot open this file!" << endl;
//		return 0;
//	}
//	
//	int sum = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		sum += a[i];
//	}
//	cout << "Sum of file: " << sum << endl;
//	fileInput.close();
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int x;
//
//	cout << "Please input a number: ";
//	cin >> x;
//
//	signX(x);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int choose;
//	cout << "What area do you want calculate?" << endl;
//	cout << "1. Rectangle" << endl;
//	cout << "2. Triangle" << endl;
//	cout << "3. Circle" << endl;
//	
//	cout << "Please input your answer (1/2/3): ";
//	cin >> choose;	
//
//	switch (choose)
//	{
//		case 1:
//		{
//			int a, b, s;
//			cout << "Please input length of Rectangle: ";
//			cin >> a;
//			cout << "Please input width of Rectangle: ";
//			cin >> b;
//			cout << "Square of Rectangle = " << squareRectangle(a, b) << endl;
//			break;
//		}
//		case 2:
//		{
//			int a, h;
//			cout << "Please input high of triangle: ";
//			cin >> h;
//			cout << "Please input triangle bottom: ";
//			cin >> a;
//			cout << "Square of triangle = " << squareTriangle(a, h) << endl;
//			break;
//		}
//		case 3:
//		{
//			int r;
//			cout << "Please input radius of circle: ";
//			cin >> r;
//			cout << "Square of Circle = " << squareCircle(r) << endl;
//			break;
//		}
//		default:
//			break;
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char flag[14][20];
//	for (int i = 0; i < 14; i++)
//	{
//		for (int j = 0; j < 20; j++)
//		{
//			if (i < 1)
//			{
//				flag[i][j] = '_';
//			}
//			else
//			{
//				if ( i < 7 && j < 8)
//				{
//					flag[i][j] = '*';
//				}
//				else
//				{
//					flag[i][j] = '_';
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < 14; i++)
//	{
//		for (int j = 0; j < 20; j++)
//		{
//			cout << flag[i][j];
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	double x, y;
//
//	init_grid();
//	for (x = -3.14159; x <= 3.14159; x += 0.1)
//	{
//		y = sin(x);
//		plot(rintf(x * 10), rintf(y * 8));
//	}
//	show_grid();
//
//	system("pause");
//	return 0;
//
//}

//int main()
//{
//	int a[20], len, i = 0, j, k;
//	char roman[20];
//
//	cout << "please enter the roman number(note: only use i,v,x,l,c,d,m): ";
//	cin.getline(roman, 20);
//	len = strlen(roman);
//	for (i = 0; i < len; i++)
//	{
//		if (roman[i] == 'i')
//			a[i] = 1;
//		else if (roman[i] == 'v')
//			a[i] = 5;
//		else if (roman[i] == 'x')
//			a[i] = 10;
//		else if (roman[i] == 'l')
//			a[i] = 50;
//		else if (roman[i] == 'c')
//			a[i] = 100;
//		else if (roman[i] == 'd')
//			a[i] = 500;
//		else if (roman[i] == 'm')
//			a[i] = 1000;
//		else
//		{
//			cout << "please input roman number one more time: ";
//			cin.getline(roman, 20);
//			exit(1);
//		}
//	}
//	k = a[len - 1];
//	for (i = len - 1; i > 0; i--)
//	{
//		if (a[i] > a[i - 1])
//			k = k - a[i - 1];
//		else if (a[i] == a[i - 1] || a[i] < a[i - 1])
//			k = k + a[i - 1];
//	}
//	
//	cout << "the corresponding decimal value is" << k << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int m, i, c, s = 0;
//
//	cout << "Please input m: ";
//	cin >> m;
//	cout << "Please input i: ";
//	cin >> i;
//	cout << "Please input c: ";
//	cin >> c;
//
//	for (int j = 0; j < c; j++)
//	{
//		s = (m * s + i) % c;
//		cout << s << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	float A[3][4] = { {5, 2, 0, 10},
//					{3, 5, 2, 5},
//					{20, 0, 0, 0} };
//	float B[4][2] = { {1.20, 0.50},
//					{2.80, 0.40},
//					{5.00, 1.00},
//					{2.00, 1.50} };
//	float C[3][2];
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			C[i][j] = 0;
//			for (int t = 0; t < 4; t++)
//			{
//				C[i][j] += A[i][t] * B[t][j];
//			}
//		}
//	}
//	
//	int maxMoney = C[0][0];
//	int minMoney = C[0][0];
//	int personMaxMoney = 0;
//	int personMinMoney = 0;
//
//	int maxCommissions = C[0][1];
//	int minCommissions = C[0][1];
//	int personMaxCommissions = 0;
//	int personMinCommissions = 0;
//
//	float sumMoney = 0;
//	float sumCommissions = 0;
//
//	for (int  i = 0; i < 3; i++)
//	{
//		if (C[i][0] > maxMoney)
//		{
//			maxMoney = C[i][0];
//			personMaxMoney = i;
//		}
//		else if (C[i][0] < minMoney)
//		{
//			minMoney = C[i][0];
//			personMinMoney = i;
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		if (C[i][1] > maxCommissions)
//		{
//			maxCommissions = C[i][1];
//			personMaxCommissions = i;
//		}
//		else if (C[i][1] < minCommissions)
//		{
//			minCommissions = C[i][1];
//			personMinCommissions = i;
//		}
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		sumMoney += C[i][0];
//		sumCommissions += C[i][1];
//	}
//
//
//	cout << "The person who makes the most money is: " << personMaxMoney + 1 << endl;
//	cout << "The person who makes the least money is: " << personMinMoney + 1 << endl;
//	cout << "The person who earns the most commissions is: " << personMaxCommissions + 1 << endl;
//	cout << "The person who earns the least commissions is: " << personMinCommissions + 1 << endl;
//	cout << "Sum of all money is: " << sumMoney << endl;
//	cout << "Sum of all commissions is: " << sumCommissions << endl;
//	cout << "The total amount goes to the seller: " << sumMoney + sumCommissions << endl;
//
//	system("pause");
//	return 0;
//}


int main()
{
	int n, baseold, basenew;
	char numberold[20];

	cout << "please input base of number: ";
	cin >> baseold;
	cout << "please input number in base " << baseold << ": ";
	cin >> numberold;
	cout << "please input base of number you want to change: ";
	cin >> basenew;

	int a = strlen(numberold);
	int base10 = 0;

	for (int i = 0; i < a; i++)
	{
		if (numberold[i] >= '0' && numberold[i] <= '9')
			base10 = base10 + (numberold[i] - 48) * pow(baseold, a - i - 1);
		else base10 = base10 + (numberold[i] - 55)* pow(baseold, a - i - 1);
	}

	convertBase10toBaseb(base10, basenew);
	
	system("pause");
	return 0;
}