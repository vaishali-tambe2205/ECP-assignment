// strcat() - concatenate two strings



#include <stdio.h>
#include <string.h>

 int main (void)

{
  char str1[20],str2[20];

    printf("Enter string1 :");
    scanf("%[^\n]s",str1);

    printf("Enter string2 :");
    scanf("%*c[^\n]s",str2);

     printf("str1=%s \n  str2=%s \n",str1,str2);
     strcat(str2,str1);
	 printf("str2=%s\n",str2);

     

return 0;
}
