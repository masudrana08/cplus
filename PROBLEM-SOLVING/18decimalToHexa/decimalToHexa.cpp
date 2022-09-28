// C++ program to convert a decimal
// number to hexadecimal number

#include <iostream>
using namespace std;

// function to convert decimal to hexadecimal
void decToHexa(int n)
{
	// char array to store hexadecimal number
	char hexaDeciNum[100];

	// counter for hexadecimal number array
	int i = 0;
	while (n != 0) {
		int temp = 0;
		temp = n % 16;

		// check if temp < 10
		if (temp < 10) {
			hexaDeciNum[i] = temp + 48;
			i++;
		}
		else {
			hexaDeciNum[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << hexaDeciNum[j];
}
int main()
{
	int n;
   cin >> n;

	decToHexa(n);
   cout << endl;

	return 0;
}