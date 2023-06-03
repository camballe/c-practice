#include <stdio.h>
int main()
{
	char name[31];
	printf("What's your name?");
	scanf("%s", name);
	printf("Hello %s, you look very nice today.", name);
	return 0;
}
