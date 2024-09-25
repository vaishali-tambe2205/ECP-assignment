#include<stdio.h>
int main()
{
	char str[50];

	FILE *fs = fopen("src.txt", "r");
	FILE *fd = fopen("dest.txt", "w");

	while(fgets(str, sizeof(str),fs) != NULL)
	{
		fputs(str,fd);
	}

	fclose(fs);
	fclose(fd);

	return 0;
}
