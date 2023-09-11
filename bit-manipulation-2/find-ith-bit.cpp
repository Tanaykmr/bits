#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	int a = 0b100110101;
	cout << a << endl;
	// to find the 6 indexed bit(assume bits are numbered from 0 from right)
	// we convert 0b100110101 to 0b000001001 
	//ans: 1
	// we shift the target bit to the rightmost position and then check if it is 1 or 0 by &1 
	a = a >> 5;
	cout << (a & 1) << endl;

	// OR, WE USE MASKING
	// We do a &  0 0 0 1 0 0 0 0 0 (we put 1 at the target bit and 0 at all other bits)
	// if result is non zero ---> 1, else 0
	a = 0b100110101;
	// int b = 0b000100000;
	int b = 1 << 5;
	cout << "b: " << bitset<9>(b) << endl;
	cout << (((a & b) == 0) ? 0 : 1) << endl;


}
