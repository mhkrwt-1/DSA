/*roblem: Given an array of integers, count the number of subarrays whose sum is equal to zero.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the count of subarrays having sum zero

Example:
Input:
6
1 -1 2 -2 3 -3

Output:
6

Explanation: A subarray is a continuous part of the array. For the input array 1 -1 2 -2 3 -3, the following subarrays have sum zero: [1, -1], [2, -2], [3, -3], [1, -1, 2, -2], [2, -2, 3, -3], and [1, -1, 2, -2, 3, -3]. Since there are 6 such subarrays, the output is 6.*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    // Simple hash using array (since constraints are small)
    int prefix = 0;
    int freq[10001] = {0};  // adjust size if needed
    int offset = 5000;      // to handle negative sums

    freq[offset] = 1;  // prefix sum = 0 initially

    for(int i = 0; i < n; i++) 
    {
        prefix += arr[i];

        if(freq[prefix + offset] > 0) 
        {
            count += freq[prefix + offset];
        }

        freq[prefix + offset]++;
    }

    printf("%d", count);
}