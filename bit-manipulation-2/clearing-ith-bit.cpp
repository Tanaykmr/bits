#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	// clearing a bit means converting from 1 to 0
	int n = 0b100110101;
	// to convert the 5th bit(6th index from 0 from right) to 0
	int mask = 1 << 5;
	n = n ^ mask;
	cout << bitset<9> (n) << endl;
}
