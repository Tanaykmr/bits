#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	// setting a bit means converting it to 1
	int n = 0b100110101;
	// we have to change 3rd bit to 0(counting from 0 from right, it's index = 4)
	int mask = 1 << 3;
	n = n | mask;
	cout << bitset<9> (n) << endl;
}
