#include <stdio.h>

int main()
{
    char str[100];
    int i, j, a, b[100] = {0};

    printf("Enter any string: ");
    scanf("%s", str);

    printf("Frequency of each letter:\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (b[i] == 1)
        continue;
        a = 1;
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                a++;
                b[j] = 1;
            }
        }
        printf("%c => %d\n", str[i], a);
    }
}