#include <iostream>
using namespace std;

void main() {
	bool r = true;
	int s, i = 0;
	cout << "Enter quantity of elements in array of numbers" << endl;
	cin >> s;
	int *a = new int[s]; 
	cout << "Enter elements of array:" << endl;
	for (i = 0; i < s; i++) {
		cin >> a[i];
	}
	cout << "Received sequence: " << endl;
	for (i = 0; i < s; i++) {
		if (a[i] * a[i + 1] > 0)
		{
			r = false;
		}
		if (r) {
			for (i = 0; i < s; i++) {
				cout << a[i] <<endl;
			}
		}
		else {
			for (i = 0; i < s; i++) {
				if (a[i] < 0) {
					cout << a[i] << endl;
				}
			}
		}
	}
	system("pause");
	delete[] a; 
}
