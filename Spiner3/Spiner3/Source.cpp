#include<iostream>

using namespace std;

int giaiThua(int n)
{
	if (n == 1 || n == 0)
		return 1;
	return n * giaiThua(n - 1);
}

int main()
{
	int N, M;
	int  numberOfLine = 0, numberOfRow = 0;

	cout << "Please input first number: ";
	cin >> N;
	cout << "Please input second number: ";
	cin >> M;

	numberOfLine = (giaiThua(N+1)) / (giaiThua(N +1 - 2) * giaiThua(2));
	numberOfRow = (giaiThua(M+1)) / (giaiThua(M + 1 - 2) * giaiThua(2));

	cout << "Number of rectangle is: " << numberOfLine * numberOfRow << endl;

	system("pause");
	return 0;
}