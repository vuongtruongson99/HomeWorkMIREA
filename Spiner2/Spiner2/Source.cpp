#include<iostream>

using namespace std;

int main()
{
	int M, A[2];
	cout << "Please input number of blade: ";
	cin >> M;

	int check = 0;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (3 * i + 4 * j == M)
			{
				cout << "Case " << ++check << endl;
				cout << "Number spinner have 3 blade: " << i << endl;
				cout << "Number spinner have 4 blade: " << j << endl;
				
			}
			
		}
	}

	if (check == 0)
	{
		cout << "Number spinner have 3 blade: 0" << endl;
		cout << "Number spinner have 4 blade: 0" << endl;
	}

	

	system("pause");
	return 0;
}