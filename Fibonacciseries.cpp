#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0; // Initialize all variables

    // Prompt user for input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Input validation
    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1; // Exit with error code
    }

    // Print Fibonacci series
    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d", t1); // Print the current term
        if (i < n) {
            printf(", "); // Add a comma for separation except after the last term
        }

        // Calculate the next term
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n"); // Print a newline at the end of the output
    return 0;
}

