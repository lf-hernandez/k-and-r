#include <stdio.h>
#define MAXLINE 1000
#define THRESHOLD 80
int readline(char line[], int maxline);
void copy(char to[], char from []);

int main() 
{
	int len;
	char line[MAXLINE];

	printf("C standard version: %ld\n", __STDC_VERSION__);

	while((len = readline(line, MAXLINE)) > 0)
		if (len > THRESHOLD) {
			printf("%s", line);
		}
	return 0;
}

int readline(char s[], int lim)
{
	int c, i;

	for (i=0; i < lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

