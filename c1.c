/* Program to remove duplicate elements in a single dimensional array */
#include <stdio.h>
#include <conio.h>

void main()
{
    int a[50], b[50], n, m = 0, i, j, found;
    clrscr();

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        found = 0;
        for (j = 0; j < m; j++)
            if (a[i] == b[j])
                found = 1;

        if (found == 0)
        {
            b[m] = a[i];
            m++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < m; i++)
        printf("%d\t", b[i]);
    getch();
}