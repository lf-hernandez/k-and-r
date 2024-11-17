/*
 * Exercise 1-19. Write a function reverse(s) that reverses the character 
 * string s. Use it to write a program that reverses its input a line at 
 * a time.
*/
#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int readline(char s[], int lim);
void reverseline(char s[]);

int main()
{
    printf("Exercise 1-19\n");
    printf("This program reverses each line of input\n");

    char line[MAXLINE];

    while (readline(line, MAXLINE) > 0) {
        reverseline(line);
	printf("%s", line);
    }
    return 0;
}

void reverseline(char s[]) {
    int i = 0;
    while (s[i] != '\0' && s[i] != '\n') {
        i++;
    }

    int left = 0, right = i - 1;
    while (left < right) {
        char temp = s[left];
        s[left++] = s[right];
        s[right--] = temp;
    }
}

int readline(char s[], int lim) {
    int c;
    int i = 0;

    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

