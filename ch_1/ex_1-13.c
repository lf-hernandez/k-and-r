#include <stdio.h>

#define MAX_WORD_LENGTH 10

int main() 
{
    int c, word_length;
    int word_lengths[MAX_WORD_LENGTH + 1] = {0};

    word_length = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (word_length > 0) {
                if (word_length <= MAX_WORD_LENGTH) {
                    ++word_lengths[word_length - 1];
                } else {
                    ++word_lengths[MAX_WORD_LENGTH];
                }
                word_length = 0;
            }
        } else {
            ++word_length;
        }
    }

    // Check if the last word counted at EOF
    if (word_length > 0) {
        if (word_length <= MAX_WORD_LENGTH) {
            ++word_lengths[word_length - 1];
        } else {
            ++word_lengths[MAX_WORD_LENGTH];
        }
    }

    printf("\n");
    for (int i = MAX_WORD_LENGTH; i > 0; --i) {
        printf("%2d |", i);
        for (int j = 0; j < word_lengths[i - 1]; ++j)
            printf("=");
        printf("\n");
    }

    printf("  0  ");
    for (int i = 1; i <= MAX_WORD_LENGTH; ++i) {
        printf("%d ", i);
    }
    printf("\n");
    printf("legend\n");
    printf("y-axis: word length\n");
    printf("x-axis: number of occurrences\n");

    return 0;
}

