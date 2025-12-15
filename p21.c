#include<stdio.h>
int main()
{
    const int num_elements = 25;
    int numbers[num_elements];
    int positive_count = 0;
    int negative_count = 0;
    int even_count = 0;
    int odd_count = 0;
    int i;

    printf("Please enter 25 integers, pressing Enter after each number.\n");
    for (i = 0; i < num_elements; i++) {
        printf("Enter number %d: ", i + 1);
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n');
            i--;
            continue;
        }
    }


    for (i = 0; i < num_elements; i++) {

        if (numbers[i] > 0) {
            positive_count++;
        } else if (numbers[i] < 0) {
            negative_count++;
        }


        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("\n--- Data Analysis Results ---\n");
    printf("Total number of positive numbers: %d\n", positive_count);
    printf("Total number of negative numbers: %d\n", negative_count);
    printf("Total number of even numbers: %d\n", even_count);
    printf("Total number of odd numbers: %d\n", odd_count);
    printf("------------------------------\n");

    return 0;
}
