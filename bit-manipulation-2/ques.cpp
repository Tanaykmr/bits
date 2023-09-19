#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
int main()
{
	int a = 0b10110;
	int b = 0b11011;
	// we have to find the nuber of bits to be changed to convert a to b
	// step 1: we do a XOR b, so the bits that have been changed become 1 and the rest becomes 0
	// step 2: count the number of 1s in the ans;
	// to count the number of 1s:
	// method 1:
		int ans1 = a ^ b;
		cout << "ans: " << bitset<9> (ans1) << endl;
		// now, until ans becomes 0, check last bit(check whether even or odd) and keep on right shifting. increment counter when last bit == 1
		int counter = 0;
		while (ans1 != 0)
		{
			((ans1 & 1) != 0) ? counter++ : 0;
			ans1 >>=  1;
		}
		cout << "the final ans is: " << counter << endl;
	
	// method 2:
		// we can optimise how we count the number of 1s in the ans
		// we use the property that if we do ans & (ans - 1), the last 1 bit becomes 0(regardless of what position it is in)
		// this step only uses the number of 1s in the ans number of steps
		int ans2 = a ^ b;
		counter = 0;
		while (ans2 != 0)
		{
			ans2 = ans2 & (ans2 - 1);
			counter++;
		}
		cout << "the final optimised ans is: " << counter << endl;


	// SIDE MISSION: TO CALC NUMBER OF DIGITS IN A NUMBER
	int x = 22;
	cout << "x has " << floor(log10(22)) + 1 << " digits" << endl;
	// this is how we calc digits in binary nums
	cout << "a has " << floor(log2(a)) + 1 << " digits" << endl;
}

