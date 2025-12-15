#include <stdio.h>

// Recursive function to calculate savings (Fibonacci logic)
int savings(int month) {
    if (month == 1 || month == 2)
        return 1; // First two months have ₹1 savings each
    return savings(month - 1) + savings(month - 2);
}

int main() {
    int n, i;

    printf("Enter the number of months: ");
    scanf("%d", &n);

    printf("\nSavings Growth Over %d Months:\n", n);

    for (i = 1; i <= n; i++) {
        printf("Month %d: Rs %d\n", i, savings(i));
    }

    return 0;
}
