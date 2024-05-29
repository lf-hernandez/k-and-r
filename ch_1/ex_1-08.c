#include <stdio.h>

int main()
{
	char c;
	int blanks, tabs, newlines;
	blanks = tabs = newlines = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++blanks;
		}
		if (c == '\t') {
			++tabs;
		}
		if (c == '\n') {
			++newlines;
		}
	}

	printf("blanks = %d | tabs = %d | newlines = %d\n", blanks, tabs, newlines);
}
