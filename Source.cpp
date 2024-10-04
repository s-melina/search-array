#include <iostream>
using namespace std;

void getArray(int a[], int n) {
	cout << "enter array : " << endl;
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] : ";
		cin >> a[i];
	}
}

void printArray(int a[], int n) {
	cout << "array : ";
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	cout << endl;
}

void sortArray(int a[], int n) {
	int b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] < a[j])
			{
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
}

int searchArray(int a[],int  n, int key, int maxNum, int minNum) {

	if (key == maxNum) {
		cout << "found!" << "it is in a[" << n-1 << "]";
	}
	if (key == minNum) {
		cout << "found!" << "it is in a[" << 0 << "]";
	}

	int firstNum = a[0];
	int lastNum = a[n-1];

	while (firstNum <= lastNum) {

		int middleNum = (firstNum + lastNum) / 2;

		if (key == a[middleNum]) {
			cout << "found!" << "it is in a["<<middleNum<<"]";
			break;
		}
		
		if (key > a[middleNum])
		{
			firstNum = a[middleNum + 1];
		}
		else if(key < a[middleNum])
		{
			lastNum = a[middleNum - 1];
		}
	}

	if (firstNum > lastNum) {
		return -1;
	}
}

int main(){
	int c[5], key;
	//int c[5] = { 1,2,5,3,4 };
	getArray(c, 5);
	sortArray(c, 5);
	printArray(c, 5);
	cout << "enter key number : ";
	cin >> key;
	searchArray(c, 5, key, 5, 1);
	return 0;
}