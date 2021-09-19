#include <iostream>
using namespace std;


void show() {
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
	}
}

void show_1(int n) {
	for (int i = 0; i < n; i++) {
		cout << i << " ";
	}
}

int sum(int a, int b) {
	return a + b;
}

void double_arr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] *= 2;
	}
}

void change(int n) {
	n += 1;
}

void change_ref(int& n) {
	n += 1;
}
int main()
{
	//for
	/*int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << " "<<i*i<< endl;
	}*/

	//if
	/*int n;
	cin >> n;
	if (n > 0) {
		cout << "+";
	}
	else if (n < 0) {
		cout << "-";
	}
	else {
		cout << 0;
	}*/

	//functions

	//show();

	/*int k;
	cin >> k;
	show_1(k);*/

	/*int r = sum(2, 3) * sum(5, 6);
	cout << r;*/

	//arrays
	/*const int n = 3;
	double arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	double res = 0;
	for (int i = 0; i < n; i++) {
		res += arr[i];
	}
	cout << res;*/

	//array of chars
	/*char str[] = "I like programming";
	cout << str;*/

	//pointers
	/*int x = 10;
	int y = 11;
	int z = 12;
	cout << &x<<endl;
	cout << &y << endl;
	cout << &z << endl;*/

	/*int x = 10;
	int* ptr = &x;
	cout << ptr<<endl;
	cout << *ptr<<endl;
	*ptr = 22;
	cout << x;*/

	/*const int n = 3;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	double_arr(arr, n);

	for (int i = 0; i < n; i++) {
		cout<< arr[i]<<" ";
	}*/

	//new, delete
	/*int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
	delete[] arr;*/

	//references
	/*int x = 5;
	int& ref = x;
	ref = 10;
	cout << x;*/

	/*int k = 2;
	change_ref(k);
	cout << k;*/

}

