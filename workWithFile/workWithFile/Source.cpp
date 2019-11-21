#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int giaithua(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * giaithua(n - 1);
}

int main()
{
	//Input 
	int a[10], n;
	char sign;
	ofstream fileOutput("C:/Users/DELL/Desktop/file.txt");

	cout << "Please input sign of cal: ";
	cin >> sign;
	fileOutput << sign;

	switch (sign)
	{
	case '+':
		cout << "Please input number of element: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "please input number " << i + 1 << ":";
			cin >> a[i];
			fileOutput << a[i];
			fileOutput << "\t";
		}
		break;

	case '*':
		for (int i = 0; i < 2; i++)
		{
			cout << "please input number " << i + 1 << ":";
			cin >> a[i];
			fileOutput << a[i];
			fileOutput << "\t";
		}
		break;

	case '/':
		cout << "please input 1 number :";
		cin >> a[0];
		fileOutput << a[0];
		fileOutput << "\t";
		break;

	case '!':
		cout << "please input 1 number :";
		cin >> a[0];
		fileOutput << a[0];
		fileOutput << "\t";
		break;
	case 'M':
		cout << "Please input number of element (at least 5 numbers): ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "please input number " << i + 1 << ":";
			cin >> a[i];
			fileOutput << a[i];
			fileOutput << "\t";
		}
		break;
	case 'X':
		cout << "Please input number of element: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "please input number " << i + 1 << ":";
			cin >> a[i];
			fileOutput << a[i];
			fileOutput << "\t";
		}
		break;
	default:
		break;
	}
	fileOutput.close();

	//Print
	ifstream fileInput("C:/Users/DELL/Desktop/file.txt");
	int am[100], max, min;	//for the number
	int n1 = 0;		//for the number
	int sum = 0, mul = 1;
	int place = 1;
	char A[1];

	fileInput.read(A, 1);
		
	switch (A[0])
	{
	case '+':
		while (fileInput >> am[n1]) n1++;
		for (int i = 0; i < n1; i++)
		{
			if (am[i] == 0) break;
			sum += am[i];
		}
		cout << "The sum is: " << sum << endl;
		break;
	case '*':
		while (fileInput >> am[n1]) n1++;
		for (int i = 0; i < n1; i++)
		{
			mul *= am[i];
		}
		cout << am[0] << "*" << am[1] << "= " << mul << endl;
		break;
	case '/':
		while (fileInput >> am[n1]) n1++;
		cout << "1 / " << am[0] << "= " << (double)1 / am[0] << endl;
		break;
	case '!':
		while (fileInput >> am[n1]) n1++;
		cout << am[0] << "! = " << giaithua(am[0]) << endl;
	case 'M':
		while (fileInput >> am[n1]) n1++;
		max = am[0];
		for (int i = 1; i < n1; i++)
		{
			if (max < am[i])
			{
				max = am[i];
			}
		}
		cout << "The maximum of 5 numbers is: " << max << endl;
		break;
	case 'X':
		while (fileInput >> am[n1]) n1++;
		min = am[0];
		for (int i = 0; i < n1; i++)
		{
			if (min > a[i])
			{
				min = a[i];
				place = i+1;
			}
		}
		cout << "Place of minimum is: " << place << endl;
		break;
	default:
		break;
	}


	
	fileInput.close();

	system("pause");
	return 0;
}

