#include <stdio.h>
#include <string.h>

// Function to perform pattern search
void patternSearch(char text[], char pattern[]) {
    int textLen = strlen(text);
    int patternLen = strlen(pattern);
    int i,found = 0;

    for (i = 0; i <= textLen - patternLen; i++) {
        int j;
        // Check for a match
        for (j = 0; j < patternLen; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == patternLen) { // Pattern found
            printf("Pattern found at index %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Pattern not found in the text\n");
    }
}

int main() {
    char text[100], pattern[50];

    printf("Enter the text: ");
    scanf("%s", text);

    printf("Enter the pattern to search: ");
    scanf("%s", pattern);

    patternSearch(text, pattern);

    return 0;
}

