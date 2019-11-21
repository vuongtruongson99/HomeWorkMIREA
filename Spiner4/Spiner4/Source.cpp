#include<iostream>

using namespace std;

int main()
{
	int numberOfElement;
	int couple = 0;
	int baseArr[9][6] = {	{1, 2, 3, 4, 53, 54},
							{5, 6, 7, 8, 51, 52},
							{9, 10, 11, 12, 49, 50},
							{13, 14, 15, 16, 47, 48},
							{17, 18, 19, 20, 45, 46},
							{21, 22, 23, 24, 43, 44},
							{25, 26, 27, 28, 41, 42},
							{29, 30, 31, 32, 39, 40},
							{33, 34, 35, 36, 37, 38}
						};

	cout << "Please input number of available seats: ";
	cin >> numberOfElement;

	int *availableSeat = new int[numberOfElement];

	for (int i = 0; i < numberOfElement; i++)
	{
		cout << "Please input seat number: ";
		cin >> *(availableSeat + i);
	}

	for (int i = 0; i < 9; i++)
	{
		int count = 0;
		for (int j = 0; j < 6; j++)
		{
			for (int z = 0; z < numberOfElement; z++)
			{
				if (baseArr[i][j] == *(availableSeat + z))
				{
					count++;

				}
			}
		}
		if (count == 6)
		{
			couple++;
		}
	}

	cout << "Number of available couple is: " << couple << endl;




	delete[] availableSeat;

	system("pause");
	return 0;
}