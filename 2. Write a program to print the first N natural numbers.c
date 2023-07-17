// 2. Write a program to print the first N natural numbers.
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter the Number ");
    scanf("%d", &num);
    printf("The Natural Numbers are: ");
    for (size_t i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }
}