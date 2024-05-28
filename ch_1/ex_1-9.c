#include <stdio.h>

int main()
{
	int c, isBlank;
	isBlank = 0;

	while((c = getchar()) != EOF)
	{
		if (c == ' ') {
			isBlank = 1;
		} else { 
			if (isBlank) {
				isBlank = 0;
				putchar(' ');
				putchar(c);
			} else {
				putchar(c);
			}
		}
	}
	return 0;
}
