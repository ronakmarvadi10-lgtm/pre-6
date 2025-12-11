#include <stdio.h>
int main()
{
    char str[50];
    int i, j, a = 0, b = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        a++;
    }
    for (i = 0, j = a - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            b = 1;
            break;
        }
    }
    if (b == 0)
    {
        printf("%s is a Palindrome:\n");
    }
    else
    {
        printf("%s is not  Palindrome:\n");
    }
}