#include<iostream>
using namespace std;


void Tower(int n, int a, int b, int c)
{
	if (n == 1)
	{
		cout <<"Tower "<< a << "=>" << " tower " << c << endl;
		return;
	}
	Tower(n - 1, a, c, b);
	Tower(1, a, b, c);
	Tower(n - 1, b, a, c);
}
int main()
{
	int a = 1, b = 2, c = 3;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Tower(n, a, b, c);
	system("pause");
}