#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *summary;
    int size;

    printf("Enter initial size for the summary (in characters): ");
    scanf("%d", &size);

    summary = (char *)calloc(size, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the initial article summary: ");
    getchar(); // clear newline from buffer
    fgets(summary, size, stdin);

    printf("\nInitial Summary: %s\n", summary);

    printf("\nEnter new size for expanded summary (in characters): ");
    scanf("%d", &size);

    summary = (char *)realloc(summary, size * sizeof(char));
    if (summary == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter the expanded article summary: ");
    getchar(); // clear newline
    fgets(summary, size, stdin);

    printf("\nUpdated Summary: %s\n", summary);

    free(summary);
    printf("This program is developed by Dev Bumtariya.");

    return 0;
}
