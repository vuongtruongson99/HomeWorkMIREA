#include<iostream>
#include<math.h>

using namespace std;

void printA1(int X[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << X[i] << "\t";
	}
	cout << endl;
}

void printA2(int X[100][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << X[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

//—кал€рные типы 1
//int main()
//{
//	int n;
//	bool square = false;
//	cout << "Please input N: ";
//	cin >> n;
//	
//	if (n >= 0) cout << "Not positive!" << endl;
//	else cout << "Positive!" << endl;
//
//	if (n % 2 != 0) cout << "Odd!" << endl;
//	else cout << "Even!" << endl;
//
//	if (n > -3) cout << "Bigger than -3" << endl;
//	else cout << "Less than -3" << endl;
//
//	int i = 0;
//	while (i*i <= n)
//	{
//		if (i*i == n)
//		{
//			square = true;
//		}
//		++i;
//	}
//	
//	if (square == true)
//	{
//		cout << n << " is squared of 2" << endl;
//	}
//	else
//	{
//		cout << n << " is not squared of 2" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//—кал€рные типы 2
//int main()
//{
//	int x;
//	cout << "Please input x: ";
//	cin >> x;
//
//	if (x < 0)
//	{
//		cout << "y = " << abs(x) + 1 << endl;
//	}
//	else if (x == 0)
//	{
//		cout << "y = 1" << endl;
//	}
//	else
//	{
//		cout << "y = " << pow(sin(2 * x), 2) << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//ќдномерные массивы 1
//int main()
//{
//	int A[100];
//	int n;
//
//	cout << "Please input number element of array: ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Please input A[" << i + 1 << "] : ";
//		cin >> A[i];
//	}
//	
//	cout << "Array A = ";
//	for (int i = 0; i < n; i++)
//	{
//		cout << A[i] << "\t";
//	}
//	cout << endl;
//	cout << endl;
//
//	cout << "Swap maximum element with minimum element!" << endl;
//	int temp = A[n - 1];
//	A[n - 1] = A[0];
//	A[0] = temp;
//	cout << "New array A = ";
//	for (int i = 0; i < n; i++)
//	{
//		cout << A[i] << "\t";
//	}
//	cout << endl;
//	cout << endl;
//
//	cout << "Check the fifth element!" << endl;
//	if (n >= 5)
//	{
//		if (A[4] % 5 < 2)
//		{
//			cout << "Modulo of fifth number " << A[4] <<" = "<< A[4] % 5 << " smaller than 2" << endl;
//		}
//		else
//		{
//			cout << "Modulo of fifth number " << A[4] << " = " << A[4] % 5 << " bigger than 2" << endl;
//		}
//	}
//	else
//	{
//		cout << "In the array doesn't have fifth element!" << endl;
//	}
//	cout << endl;
//
//	cout << "Sorted array!" << endl;
//	
//	for (int i = 0; i < n; i++)
//	{
//		int max = A[0];
//		for (int j = i+1; j < n; j++)
//		{
//			if (A[i] > A[j])
//			{
//				int temp = A[j];
//				A[j] = A[i];
//				A[i] = temp;
//			}
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout << A[i] << "\t";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//ќдномерные массивы 2
//int main()
//{
//	int A[100], C[100], D[100];
//	double B[100];
//	int n;
//	cout << "Please input number element of array: ";
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Input A[" << i + 1 << "]: ";
//		cin >> A[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		B[i] = (double)1 / tan(1 + i * i);
//		C[i] = rand() % (1 + 11 + 1) + -11;
//		D[i] = A[i] - 5 * C[i] + 4 * B[i];
//	}
//
//	cout << "Array A = ";
//	printA1(A, n);
//
//	cout << "Array B = ";
//	for (int i = 0; i < n; i++)
//	{
//		cout << B[i] << "\t";
//	}
//	cout << endl;
//
//	cout << "Array C = ";
//	printA1(C, n);
//
//	cout << "Array D = ";
//	for (int i = 0; i < n; i++)
//	{
//		cout << B[i] << "\t";
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}

//ќбработка двумернвх массивов
int main()
{
	int A[100][100],B[100][100], C[100][100], D[100][100], E[100][100];
	int m, n;
	cout << "Please input number row of array: ";
	cin >> m;
	cout << "Please input number column of array: ";
	cin >> n;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Input A[" << i + 1 << "][" << j+1 << "]: ";
			cin >> A[i][j];
		}	
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = i * j - (5 - i - j);
			C[i][j] = rand() % (6 +3 + 1) + -3;
			E[i][j] = 1;
			D[i][j] = 6 * E[i][j] - C[i][j] - 2 * B[i][j] - 3 * A[i][j];
		}
	}

	cout << "Array A = ";
	printA2(A, m, n);

	cout << "Array B = ";
	printA2(B, m, n);
	

	cout << "Array C = ";
	printA2(C, m, n);

	cout << "Array D = ";
	printA2(D, m, n);

	cout << "Array E = ";
	printA2(E, m, n);

	system("pause");
	return 0;
}