#include <iostream>
using namespace std;

void main() {
	int s = 0;
	cout << "Enter quantity of elements in array of numbers" << endl;
	cin >> s;
	int *a = new int[s];
	cout << "Enter elements of array:" << endl;
	for (int i = 0; i < s; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < s; i++) {
		if (a[i] <= a[i - 1])
		{
			for (int j = i; j < s - 1; ++j)
				a[j] = a[j + 1]; 
			--s;
		}
		else ++i;
	}
	cout << "Received sequence: " << endl;
	for (int i = 0; i < s; i++)
	{
		cout << a[i] << endl;
	}
	system("pause");
	delete[] a; 
