/*
Problem: Matrix Addition

Write a program to perform addition of two matrices having the same dimensions.

Input:
- First line: two integers m and n
- Next m lines: first matrix
- Next m lines: second matrix

Output:
- Print the resultant matrix after addition.
*/

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[100][100], b[100][100];

    // Input first matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add and print the resultant matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", a[i][j] + b[i][j]);
            if (j != n - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}