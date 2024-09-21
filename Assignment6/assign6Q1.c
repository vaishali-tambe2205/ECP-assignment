//Write a program to demonstrate use of string library functions.

//strlen()- calculate the length of string.


#include <stdio.h>
#include <stdio.h>
int main(void)

{

char str [20];
size_t len;
printf("enter the string:");
scanf("%[^\n]s",str);
printf("str=%s \n", str);
len= strlen(str);
printf("len=%d \n",len);


return 0;
}
