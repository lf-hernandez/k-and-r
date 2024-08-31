#include <stdio.h>

#define ASCII_SIZE 128

int main() {
    int c;
    int frequencies[ASCII_SIZE] = {0};

    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < ASCII_SIZE) {
            frequencies[c]++;
        }
    }

    printf("Character Frequency Histogram:\n\n");
    
    for (int i = 32; i < ASCII_SIZE; i++) {
        if (frequencies[i] > 0) {
            printf("'%c' | ", i);
            for (int j = 0; j < frequencies[i]; j++) {
                printf("=");
            }
            printf("\n");
        }
    }

    return 0;
}
