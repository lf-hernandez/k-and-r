/*
* Exercise 1-18. Write a program to remove trailing blanks and tabs from each 
* line of input, and to delete entirely blank lines.
*/
#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int readline(char line[], int maxline);
int removeblanksfrom(char s[]);

/* remove trailing blanks and tabs, and delete blank lines */ 
int main()
{
	printf("Exercise 1-18\n");
	printf("This program removes trailing blanks and tabs from each line of input\n");

	char line[MAXLINE]; /* current input line */

	while ((readline(line, MAXLINE)) > 0)
		if (removeblanksfrom(line) > 0)
			printf("%s", line);
	return 0;
}

/* remove trailing blanks and tabs from character string s */
int removeblanksfrom(char s[])
{
	int i = 0;

	while (s[i] != '\n')	/* find newline character */
		++i;
	--i;			/* back off from newline  */
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		--i;
	if (i >= 0) {		/* is it a nonblank line? */
		++i;
		s[i] = '\n';	/* put newline back 	  */
		++i;
		s[i] = '\0';	/* terminate string 	  */
	}	

	return i;
}

/* readline: read a line into s, return length */
int readline(char s[], int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if (i < lim - 2) {
			s[i] = c;
			++j;
		}
	if (c == '\n') {
		s[j] = c;
		++j;
		++i;
	}
	s[i] = '\0';
	return i;
}
