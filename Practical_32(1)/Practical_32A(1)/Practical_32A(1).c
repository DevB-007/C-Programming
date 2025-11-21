#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a single word
void reverseWord(char *word) {
    int len = strlen(word);
    for (int i = 0; i < len / 2; i++) {
        char temp = word[i];
        word[i] = word[len - i - 1];
        word[len - i - 1] = temp;
    }
}

int main() {
    FILE *fp;
    char buffer[1000];   // buffer to read file content
    char word[100];      // temporary word storage

    // Step 1: Open the file
    fp = fopen("Demo.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open Demo.txt\n");
        printf("This program is developed by Dev Bumtariya.");
        return 1;
    }

    printf("Reversed words from Demo.txt:\n\n");

    // Step 2: Read file content word by word
    while (fscanf(fp, "%s", word) == 1) {
        // Step 3: Reverse each word
        reverseWord(word);

        // Step 4: Display reversed word
        printf("%s ", word);
    }

    fclose(fp);
    printf("\nThis program  is developed by Dev Bumtariya.");

    return 0;
}
