#include<iostream>

using namespace std;

int main()
{
	int A, B, C;
	int blade = 0;

	cout << "Please input spinner base cost: ";
	cin >> A;
	cout << "Please input the cost of one blade: ";
	cin >> B;
	cout << "Please input maximum cost of spinner: ";
	cin >> C;

	for (int i = 1; i < 20; i++)
	{
		if (A + B * i <= C)
		{
			blade++;
		}
	}

	cout << "The largest number of blades is: " << blade << endl;

	system("pause");
	return 0;
}