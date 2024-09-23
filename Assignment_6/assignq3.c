#include <stdio.h>
#include <ctype.h>

char* remove_char(char* str, char c) 
{
    char* write = str;
    char* read = str;

    while (*read)
	{
        if (*read != c)
		{
            *write = *read;
            write++;
        }
        read++;
    }
    *write = '\0';

    return str;
}

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50] = "hello";

    char test_str[50] = "Hello, World!";
    printf("Original string: %s\n", test_str);

	char ch;
	printf("Enter character to remove from the above string\n");
	scanf("%s",&ch);

	remove_char(test_str, ch);

    printf("After removing : %s\n", test_str);

    return 0;
}
