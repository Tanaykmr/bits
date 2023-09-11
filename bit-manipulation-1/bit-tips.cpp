#include <iostream>
using namespace std;
int main()
{
	int a = 5;
	int b = 12;
	// to multiply by 2, we right shift by 1
	a = a << 1;
	cout << "a: " << a << endl;
	// to divide by 2, we left shift by 1
	b = b << 1;
	cout << "b: " << b << endl;
	
}
