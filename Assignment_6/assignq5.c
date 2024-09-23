#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <limits.h>

int my_atoi(const char* str) 
{
    if (str == NULL) return 0;

    int result = 0;
    int sign = 1;
    int i = 0;

    while (isspace(str[i])) i++;

    if (str[i] == '-') 
	{
        sign = -1;
        i++;
    } else if (str[i] == '+') 
	{
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') 
	{
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && str[i] - '0' > INT_MAX % 10))
		{
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";

    const char* num_str1 = "12345";
    const char* num_str2 = "42abc";

    printf("my_atoi(\"%s\") = %d\n", num_str1, my_atoi(num_str1));
    printf("my_atoi(\"%s\") = %d\n", num_str2, my_atoi(num_str2));

    return 0;
}
