#include <stdio.h>
#include <string.h>

// Sample book list
char books[5][30] = {
    "C Programming",
    "Data Structures",
    "Operating Systems",
    "Computer Networks",
    "Database Systems"
};
int totalBooks = 5;

// 1. No arguments, no return value
void displayBooks() {
    printf("Available Books:\n");
    for (int i = 0; i < totalBooks; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }
}

// 2. No arguments, return value
int countBooks() {
    return totalBooks;
}

// 3. Arguments passed, no return value
void borrowBook(char bookName[]) {
    int found = 0;
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(books[i], bookName) == 0) {
            printf("You have borrowed \"%s\".\n", bookName);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book \"%s\" not found in inventory.\n", bookName);
    }
}

// 4. Arguments passed, return value
float calculateFine(int days) {
    float rate = 2.0; // ₹2 per day
    return days * rate;
}

// Main function to test all methods
int main() {
    displayBooks();

    int count = countBooks();
    printf("\nTotal number of books: %d\n", count);

    borrowBook("Data Structures");
    borrowBook("Artificial Intelligence");

    int lateDays = 5;
    float fine = calculateFine(lateDays);
    printf("\nFine for %d late days: ₹%.2f\n", lateDays, fine);
    printf("This program is developed by Dev Bumtariya.");

    return 0;
}
