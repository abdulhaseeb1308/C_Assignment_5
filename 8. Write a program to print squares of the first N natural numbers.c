// 8. Write a program to print squares of the first N natural numbers
#include <stdio.h>
int main()
{
    int num, i, square;
    printf("Enter The Number ");
    scanf("%d", &num);
    printf("The Square of Numbers are :");
    for (i = 1; i <= num; i++)
    {
        square = i * i;
        printf("%d ", square);
    }
}