#include <stdio.h>
#include <string.h>

// Structure for Coach details
struct Coach {
    char name[50];
    int age;
    int experience; // years of experience
};

// Structure for Team details (nested Coach structure)
struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

// Global array to store multiple teams
struct Team teams[50];
int teamCount = 0;

// Function to add a new team
void addTeam() {
    if (teamCount >= 50) {
        printf("Team list is full!\n");
        return;
    }

    printf("\nEnter Team Name: ");
    scanf(" %[^\n]", teams[teamCount].teamName);

    printf("Enter Sport Type: ");
    scanf(" %[^\n]", teams[teamCount].sportType);

    printf("Enter Coach Name: ");
    scanf(" %[^\n]", teams[teamCount].coach.name);

    printf("Enter Coach Age: ");
    scanf("%d", &teams[teamCount].coach.age);

    printf("Enter Coach Experience (years): ");
    scanf("%d", &teams[teamCount].coach.experience);

    teamCount++;
    printf("Team added successfully!\n");
}

// Function to search for a team by name
void searchTeam() {
    char searchName[50];
    printf("\nEnter Team Name to search: ");
    scanf(" %[^\n]", searchName);

    int found = 0;
    for (int i = 0; i < teamCount; i++) {
        if (strcmp(teams[i].teamName, searchName) == 0) {
            printf("\n--- Team Found ---\n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport Type: %s\n", teams[i].sportType);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Coach Experience: %d years\n", teams[i].coach.experience);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Team not found!\n");
    }
}

// Function to display all teams
void displayTeams() {
    if (teamCount == 0) {
        printf("\nNo teams available!\n");
        return;
    }

    printf("\n=== List of Teams ===\n");
    for (int i = 0; i < teamCount; i++) {
        printf("\nTeam %d:\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport Type: %s\n", teams[i].sportType);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Coach Experience: %d years\n", teams[i].coach.experience);
    }
}

// Main function with menu
int main() {
    int choice;
    do {
        printf("\n--- Sports Team Management ---\n");
        printf("1. Add New Team\n");
        printf("2. Search Team by Name\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addTeam(); break;
            case 2: searchTeam(); break;
            case 3: displayTeams(); break;
            case 4: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);
    printf("This program is developed by Dev Bumtariya.");

    return 0;
}
