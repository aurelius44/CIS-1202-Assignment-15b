// Mark Middleton
// CIS 1202 501
// December 1, 2022

#include<iostream>

using namespace std;

template <typename T>

T half(T number) {

	T divided;

	divided = number / 2;

	if (*typeid(number).name() == 'i') {

		if (divided * 2 != number) {

			divided++;

		}

	}

	return divided;
}

int main() {

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

}