#include <iostream>
using namespace std;

int Sum(int &a, int &b) {
	int sum = a + b;
	return sum;
}

double SumD(double& a, double& b) {
	double sum = a + b;
	return sum;
}


int main() {
	int a, b;
	cout << "Enter 2 elements: ";
	cin >> a;
	cin >> b;
	cout << "Summ a + b = " << Sum(a,b) << endl;

	double q, e;
	cout << "Enter 2 double elem: ";
	cin >> q;
	cin >> e;
	cout << "Sum q + e = " << SumD(q, e) << endl;
	return 0;
}