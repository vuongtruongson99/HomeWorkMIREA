#include<iostream>
#define MAX 100
using namespace std;

int n;
int Bool[MAX] = { 0 };
int A[MAX];
int c = 0;
//Đit mẹ m
void Check() {
	for (int i = 1; i <= n; i++) {
		if (A[i] == i) {
			c++;
			break;
		}
	}
}
//Con mẹ m
void Try(int k) {
	for (int i = 1; i <= n; i++) {
		if (!Bool[i]) {
			A[k] = i;
			Bool[i] = 1;
			if (k == n)
				Check();
			else
				Try(k + 1);
			Bool[i] = 0;
		}
	}
}
//Cái con cạc
int main() {
	cout << "Number of balls N = ";	cin >> n;
	Try(1);
	cout << "Total situations = " << c << endl;

	system("pause");
	return 0;
}