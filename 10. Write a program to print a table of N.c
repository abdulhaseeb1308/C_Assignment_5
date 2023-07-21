// 10. Write a program to print a table of N.
#include <stdio.h>
int main()
{
    int num, i, table;
    printf("Enter The Number: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        table = num * i;
        printf("%d * %d = %d \n", num, i, table);
    }
}
