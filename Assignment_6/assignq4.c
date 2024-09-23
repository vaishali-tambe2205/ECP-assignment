#include <stdio.h>
#include <string.h>

void remove_chars(char *string1, char *string2)
{
    int i, j, k;

    for (i = 0; string1[i] != '\0'; i++)
	{
        for (j = 0; string2[j] != '\0'; j++) 
		{
            if (string1[i] == string2[j]) 
			{
                for (k = j; string2[k] != '\0'; k++) 
				{
                    string2[k] = string2[k + 1];
                }
                j--;
            }
        }
    }
}

int main()
{
    char string1[100], string2[100];

    printf("Enter the first string: ");
    fgets(string1, 100, stdin);

    printf("Enter the second string: ");
    fgets(string2, 100, stdin);

    remove_chars(string1, string2);

    printf("The modified second string is: %s\n", string2);

    return 0;
}
