/*
Problem:
Implement Linear Search to find a key (k) in an array.
Count and display the number of comparisons performed.

Input:
- First line: Integer n (size of the array)
- Second line: n space-separated integers
- Third line: Integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
- Line 2: "Comparisons = c"

Example:

Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation:
The key 30 is found after comparing with 10, 20, and 30.
Hence, the total number of comparisons is 3.
*/
#include <stdio.h>

int main() {
    int n, k, comparisons = 0;

    // Read the size of the array
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the key to search
    scanf("%d", &k);

    int found = -1;

    // Perform Linear Search
    for (int i = 0; i < n; i++) {
        comparisons++;

        if (arr[i] == k) {
            found = i;
            break;
        }
    }

    // Display result
    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not Found\n");

    printf("Comparisons = %d\n", comparisons);

    return 0;
}