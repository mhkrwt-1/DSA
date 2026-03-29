//Inserting an element in an array
#include <stdio.h>
int main()
{
    int i,n,pos,ele;
    printf("Enter value of 'n':");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a position where element is to be entered:");
    scanf("%d",&pos);
    printf("Enter a number to be inserted:");
    scanf("%d",&ele);
    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = ele;
    printf("Updated array: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}    



