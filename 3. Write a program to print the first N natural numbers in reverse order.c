// 3. Write a program to print the first N natural numbers in reverse order
#include <stdio.h>
int main()
{
    int num, i;
    printf("Enter The Number \n");
    scanf("%d", &num);
    printf("The Natural Number in reverse order: ");
    for (i = num; i >= 1; i--)
    {
        printf("%d ", i);
    }
}