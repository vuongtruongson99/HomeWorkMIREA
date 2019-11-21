#include<iostream>
using namespace std;


int a[600][4];
int n;

void dcmm(int b)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (b == a[i][j])
			{
				cout << a[i][0] << endl;
				dcmm(a[i][0]);
			}
		}
	}
}

void dcmm1(int b)
{
	int o;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (b == a[i][j])
			{
				cout << a[i][0] << endl;
				o = a[i][0];
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (o == a[i][j])
			{
				cout << a[i][0] << endl;
			}
		}
	}
}

void kt(int x)
{

}
void case1()
{
	int c;
	int u = 0;
	cout << "The number of monk: "; cin >> c;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (c == a[i][j])
			{
				u = 1;
				dcmm1(c);
				break;
			}
		}
	}
	if (u == 0)
		cout << c << " no monk";
}

void dcmm3(int b, int t[600])
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (b == a[i][j])
			{
				t[b] = a[i][0];
				dcmm3(a[i][0], t);
			}
		}
	}
}

void dcmm2(int g, int h)
{
	int t1[600], t2[600];
	for (int i = 1; i < 600; i++)
	{
		t1[i] = 0;
		t2[i] = 0;
	}
	dcmm3(g, t1);
	dcmm3(h, t2);
	g = t1[0];
	h = t2[0];
	for (int i = 1; i < 600; i++)
	{
		for (int j = 1; j < 600; j++)
			if ((t1[i] == t2[j]) && t1[i] != 0 && t2[j] != 0)
			{
				cout << t1[i] << endl;
				break;
			}
	}
}



void case2()
{
	int l = 0;
	int d, e, p1 = 0, p2 = 0, q1 = 0, q2 = 0;
	cout << "The number of monks: "; cin >> d >> e;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			if (d == a[i][j])
			{
				p1 = i;
				q1 = j;
				l = 1;
				break;
			}
		}
	}
	if (l == 0)
		cout << d << " no monk";
	int y = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (e == a[i][j])
			{
				p2 = i;
				q2 = j;
				y = 1;
				break;
			}
		}
	}
	if (y == 0)
		cout << e << " no monk";

	if (l == 1 && y == 1)
	{
		if (p1 == p2)
			cout << a[p1][0];
		else dcmm2(d, e);
	}
}



int main()
{
	int h = 4;


	int i, j;
	cout << "The monks: " << endl;
	for (i = 0; i < 600; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cin >> a[i][j];
		}
		if (a[i][0] == 0)
			break;
		n = i + 1;
	}
	while (h--)
	{
		cout << endl;
		int th; cout << "case: "; cin >> th;
		if (th == 1)
			case1();
		else case2();
	}
	system("pause");
}