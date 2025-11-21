#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int n, mark, i;

    fp = fopen("marks.dat", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        printf("This program is developed by Dev Bumtariya.");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input marks and store using putw()
    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &mark);
        putw(mark, fp);  // write integer to file
    }

    fclose(fp);
    printf("\nMarks successfully stored in file.\n");

    fp = fopen("marks.dat", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Retrieved Marks ---\n");
    i = 1;
    while ((mark = getw(fp)) != EOF) {  // read until end of file
        printf("Student %d: %d\n", i, mark);
        i++;
    }

    fclose(fp);
    printf("This program is developed by Dev Bumtariya.");
    return 0;
}
