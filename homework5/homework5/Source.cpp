#include<iostream>

using namespace std;

//Algorithm Eculide
int euclid(int a, int b)
{
	return (b == 0) ? a : euclid(a, a % b);
}

int main()
{
	int a, b;
	cout << "Please input first number: ";
	cin >> a;
	cout << "Please input second number: ";
	cin >> b;
	
	cout << "Greatest common divisor: " << euclid(a, b) << endl;

	system("pause");
	return 0;
}

//Algorithm Eratosthenes
//int main()
//{
//	bool a[100];
//	int b;
//	
//	cout << "Please input given boundary: ";
//	cin >> b;
//
//	for (int i = 0; i < b; i++)
//	{
//		a[i] = true;
//	}
//
//	for (int i = 2; i <= b; i++)
//	{
//		if (a[i])
//		{
//			for (int j = 2 * i; j <= b; j+= i)
//			{
//				a[j] = false;
//			}
//		}
//	}
//
//	for (int i = 2; i <= b; i++)
//	{
//		if (a[i] == true)
//		{
//			cout << i << "\t";
//		}
//	}
//	system("pause");
//	return 0;
//}