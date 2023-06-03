#include <stdio.h>
int main()
{
	//BINARY OPERATORS
	int x = 2 + 3 * 4 / 3 - 2;
	int y = 5 % 2; // modulus operator - remainder (integers)
	// operator precedence
	// * / + - 
	printf("%d\n", x);
	int piecesOfPizza = 5;
	int numberOfEaters = 2;
	int leftOvers = piecesOfPizza % numberOfEaters;
	printf("%d\n", leftOvers);
	return 0;
}
