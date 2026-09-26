#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int start = 0, end, i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n')
        {
            end = i - 1;

            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("Reversed words: %s", str);

    return 0;
}