// 5. Write a program to print the first N odd natural numbers in reverse orde
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter The Number ");
    scanf("%d", &num);
    printf("The Natural Number are :");
    for (i = num; i <= num; i--)
    {
        if (i % 2 == 1)
            printf("%d ", i);
    }
}