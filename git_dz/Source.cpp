#include <iostream>
using namespace std;

int Sum(int &a, int &b) {
	int sum = a + b;
	return sum;
}


int main() {
	int a, b;
	cout << "Enter 2 elements: ";
	cin >> a;
	cin >> b;
	cout << "Summ a + b = " << Sum(a,b) << endl;
	return 0;
}