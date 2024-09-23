#include <stdio.h>
#include <string.h>

void findAndReplace(char *source, const char *find, const char *replace)
{
    char *ptr = strstr(source, find);
    if (ptr != NULL)
	{
        int findLen = strlen(find);
        int replaceLen = strlen(replace);
        int diff = replaceLen - findLen;
        
		if (diff > 0)
		{
            memmove(ptr + replaceLen, ptr + findLen, strlen(ptr + findLen) + 1);
        }
		else if (diff < 0) 
		{
            memmove(ptr + replaceLen, ptr + findLen + (-diff), strlen(ptr + findLen) + 1);
        }
        strncpy(ptr, replace, replaceLen);
    }
}

int main()
{
    char source[100] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    findAndReplace(source, find, replace);

    printf("Output: %s\n", source);

    return 0;
}
