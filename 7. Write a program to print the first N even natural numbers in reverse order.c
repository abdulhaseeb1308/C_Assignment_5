// 7. Write a program to print the first N even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter The Number ");
    scanf("%d", &num);
    printf("The Natural Number are :");
    for (i = num; i >= 0; i--)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}