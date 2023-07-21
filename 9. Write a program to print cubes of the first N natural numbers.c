// 9. Write a program to print cubes of the first N natural numbers
#include <stdio.h>
int main()
{
    int num, i, cube;
    printf("Enter The Number ");
    scanf("%d", &num);
    printf("The cube of Numbers are :");
    for (i = 1; i <= num; i++)
    {
        cube = i * i * i;
        printf("%d ", cube);
    }
}