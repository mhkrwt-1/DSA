/*Problem: Given an array of integers, rotate the array to the right by k positions.

Input:
- First line: integer n
- Second line: n integers
- Third line: integer k

Output:
- Print the rotated array

Example:
Input:
5
1 2 3 4 5
2

Output:
4 5 1 2 3*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter a value of 'k':");
    scanf("%d", &k);
    k = k % n;

    // Step 1: reverse whole array
    for(int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 2: reverse first k elements
    for(int i = 0, j = k - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Step 3: reverse remaining elements
    for(int i = k, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Output rotated array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}