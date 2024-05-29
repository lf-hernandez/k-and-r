#include <stdio.h>

int main()
{
	int c;
	
	/* EOF in stdin => Ctrl + D */
	printf("verifying getchar() != EOF == 0 or 1:\n");
	printf("%d", getchar() != EOF);

	while((c = getchar()) != EOF) {
		putchar(c);
	}

	return 0;
}
