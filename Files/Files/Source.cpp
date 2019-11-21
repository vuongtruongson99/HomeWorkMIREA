#include<iostream>
#include<fstream>

#define MAX 8
using namespace std;

int main()
{
	int a[4][MAX][MAX];
	
	ofstream fileOut;
	fileOut.open("C:/Users/trson/Desktop/Input.txt");

	for (int  i = 0; i < 4; i++)
	{
		cout << "Please input "<< i+1 << "st array!" << endl;
		for (int j = 0; j  < MAX; j ++)
		{
			for (int k = 0; k < MAX; k++)
			{
				cin >> a[i][j][k];
				fileOut >> a[j][k] << "\t";
			}
		}
	}
		



	fileOut.close();


	system("pause");
	return 0;
}