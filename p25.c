 #include <stdio.h>
#include <string.h>
char books[4][50] = {"The Myth", "The Stranger Things", "C Basics", "Truth or Lie"};
int totalBooks = 4;
void displayBooks() {
    printf("\nAvailable Books:\n");
    for (int i = 0; i < totalBooks; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }
}
int getTotalBooks() {
    return totalBooks;
}
void borrowBook(char bookName[]) {
    int found = 0;
    for (int i = 0; i < totalBooks; i++) {
        if (strcmp(books[i], bookName) == 0) {
            printf("\nYou borrowed: %s\n", books[i]);
            strcpy(books[i], "[Borrowed]");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nSorry, the book '%s' is not available.\n", bookName);
    }
}
float calculateFine(int daysLate) {
    float finePerDay = 2.5;
    float totalFine = daysLate * finePerDay;
    return totalFine;
}
int main() {
    int choice;
    char bookName[50];
    int daysLate;
    do {
        printf("\n=== Library Management System ===\n");
        printf("1. Display available books\n");
        printf("2. Get total number of books\n");
        printf("3. Borrow a book\n");
        printf("4. Calculate fine\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                displayBooks();
                break;

            case 2:
                printf("\nTotal number of books: %d\n", getTotalBooks());
                break;

            case 3:
                printf("\nEnter book name to borrow: ");
                fgets(bookName, sizeof(bookName), stdin);
                bookName[strcspn(bookName, "\n")] = 0;
                borrowBook(bookName);
                break;

            case 4:
                printf("\nEnter number of days late: ");
                scanf("%d", &daysLate);
                printf("Fine amount: %.2f\n", calculateFine(daysLate));
                break;

            case 5:
                printf("\nExiting program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
