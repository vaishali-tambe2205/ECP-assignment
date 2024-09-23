#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10], str2[10];

	printf("Enter string 1 :\n");
	scanf("%s",str1);

	printf("Enter string 2 :\n");
	scanf("%s",str2);

	//strlen

	int length= strlen(str1);
	printf("\nLength of string 1 is : %d\n",length);

	//strcpy

	strcpy(str1, str2);
	printf("\nString 1 : %s\n",str1);
	printf("String 2 : %s\n",str2);

	//strcat

	strcat(str1, "Patil");
	printf("\nString 1 after strcat : %s\n",str1);
	
	//strcmp

	int cmp = strcmp(str1,str2);
	printf("\n%d\n",cmp);

	
	//stricmp

	int res = stricmp("hello", "Hello");
	printf("\n%d\n",res);

	//strrev

	strrev(str1);
	printf("str1 : %s\n",str1);

	//strchr

	char *ch = strchr(str1, 'i');
    printf("First occurrence of 'i': %s\n", ch);

    // strstr

    char *substr = strstr(str1, "patil");
    printf("First occurrence of 'patil': %s\n", substr);

	// strncpy

	int a = strncpy(str1 , str2, 3)
	printf("a : %d", a);

	// strncat

	strncat(str1, " End", 4);
    printf("str1 after strncat: %s\n", str1);

	// strncmp

	int ncmp = strncmp(str1 , str2, 5);
	printf("%d",ncmp);

	// strtok

	char str[] = "Hello, World!";
    char *token = strtok(str, " ,!");
    
    printf("Token: %s\n", token);


	return 0;
}
