#include <stdio.h>

int main() 
{
	int c, i;
	int word, words;
	int wLens[10];
	
	word = words = 0;
	for (i = 1; i <= 10; ++i)
		wLens[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			++words;
			++wLens[word];
			word = 0;
		}
		else {
			++word;
		}
	}
	
	int col;
	
	printf("y word len\n");
	for (i = 10; i > 0; --i) {
		printf("%2d |", i);
		for (col = 0; col < wLens[i]; ++col)
			printf("=");
		printf("\n");
	}
	
	printf(" 0  ");
	for (i = 1; i < 10; ++i) { 
		printf("%d ", i);
	}
	printf("x no of occurences");
	return 0;
}
