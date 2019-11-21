#include<iostream>
#include<fstream> //For task 3 and 4
#include<sstream>

using namespace std;

//задание ЗАЕМ
//int main()
//{
//	float m, s, p, n, r;
//
//	cout << "caculator monthly payment! " << endl;
//	cout << "please input a loan (s): ";
//	cin >> s;
//	cout << "please input the loan for how many years (n):  ";
//	cin >> n;
//	cout << "please input the interest rate (p): ";
//	cin >> p;
//	
//	r = p / 100;
//	m = (s*r*pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
//
//	cout << "monthly payment: " << m << endl;
//
//	system("pause");
//	return 0;
//}

//задание ССУДА
//int main()
//{
//	double p, s, m, n, m0, r;
//
//	cout << "Please input a loan (S): ";
//	cin >> s;
//	cout << "Please input monthly payment (m): ";
//	cin >> m;
//	cout << "Please input loan for how many year (n): ";
//	cin >> n;
//
//	for (int i = 1; i < 10000; i++)
//	{
//		p = (double)i / 1000;
//		r = p / 100;
//		m0 = (s*r*pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
//		if (m0 > m)
//		{
//			break;
//		}
//	}
//
//	cout << "The interest rate (p): " << p << endl;
//
//	system("pause");
//	return 0;
//}

//задание КОПИРОВАНИЕ ФАЙЛА
//int main()
//{
//	fstream file;
//	file.open("text.txt");
//	if(!file)
//	{
//		cerr << "file cannot be opened!";
//		return 1;
//	}
//
//	while (!file.eof())
//	{
//		char c;
//		file.get(c);
//		cout << c;
//	}
//	cout << endl;
//
//	file.close();
//
//	system("pause");
//	return 0;
//}

//задание ФИЛЬТР
//int main()
//{
//	string data;
//	fstream file;
//
//	file.open("text.txt");
//	if (!file)
//	{
//		cerr << "file cannot be opened!" << endl;
//		return 1;
//	}
//
//	while (!file.eof())
//	{
//		getline(file, data);
//
//		for (int i = 0; i < data.size(); i++)
//		{
//			if (isdigit(data[i]))
//			{
//				cout << data[i];
//			}
//		}
//	}
//	
//	file.close();
//	
//	system("pause");
//	return 0;
//}

//задание СОРТИРОВКА БУКВ
int main()
{
	int key;
	char data[30];
	

	cout << "Please input 30 ramdom digits: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> data[i];
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10-i-1; j++)
		{
			if ((int)data[j] > (int)data[j+1])
			{
				char temp = data[j];
				data[j] = data[j+1];
				data[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << data[i] << "\t";
	}

	system("pause");
	return 0;
}