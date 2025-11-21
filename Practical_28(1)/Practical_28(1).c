#include <stdio.h>
#include <string.h>

// Define a union to store book details (only one field at a time)
union Book {
    int accessionNumber;
    char title[50];
    char author[50];
    float price;
    int issuedFlag; // 1 = issued, 0 = available
};

int main() {
    union Book book;   // Declare a union variable
    int choice;

    printf("=== Library Book Management System ===\n");

    // Enter book details one by one
    printf("\nEnter accession number: ");
    scanf("%d", &book.accessionNumber);
    printf("Accession Number: %d\n", book.accessionNumber);

    printf("\nEnter book title: ");
    scanf(" %[^\n]", book.title);   // read string with spaces
    printf("Title: %s\n", book.title);

    printf("\nEnter author name: ");
    scanf(" %[^\n]", book.author);
    printf("Author: %s\n", book.author);

    printf("\nEnter book price: ");
    scanf("%f", &book.price);
    printf("Price: %.2f\n", book.price);

    printf("\nIs the book issued? (1 = Yes, 0 = No): ");
    scanf("%d", &book.issuedFlag);

    // Display final details
    printf("\n=== Book Details ===\n");
    printf("Accession Number: %d\n", book.accessionNumber);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("Status: %s\n", (book.issuedFlag == 1) ? "Issued" : "Available");
    printf("This program is developed by Dev Bumtariya.");

    return 0;
}
