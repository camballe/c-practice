#include <stdio.h>
int main()
{
	int money = 25;
	int bill = 15;

	int total = money - - bill; // 25 - 15 ... 10
	printf("%i\n", total);
	return 0;
}
