#include <iostream>
using namespace std;
int main()
{
	int a = 5;
	int b = 12;
	cout << "a: " << a << " b: " << b << endl;
	a ^= b;
	b ^= a;
	a ^= b;
	cout << "a: " << a << " b: " << b << endl;
}
