#include <stdio.h>

#define TOTAL_STUDENTS 3

struct student {
    char name[20];
    unsigned int standard : 4;
    unsigned int gender : 1;   
    unsigned int age : 6;     
};

void Accept_Info(struct student students[], int count);
void Display_Info(struct student students[], int count);

int main()
{
    struct student students[TOTAL_STUDENTS];

    Accept_Info(students, TOTAL_STUDENTS);
    Display_Info(students, TOTAL_STUDENTS);

    return 0;
}

void Accept_Info(struct student students[], int count)
{
    for (int i = 0; i < count; i++)
	{
        printf("Enter information for student %d:\n", i + 1);

        printf("Enter name:\n");
        scanf(" %[^\n]", students[i].name);

        printf("Enter standard (1-12):\n");
        scanf("%u", &students[i].standard);
    
		while (students[i].standard < 1 || students[i].standard > 12)
		{
            printf("Invalid standard. Please enter a value between 1 and 12:\n");
            scanf("%u", &students[i].standard);
        }

        printf("Enter gender (0 for male, 1 for female):\n");
        scanf("%u", &students[i].gender);
        
		while (students[i].gender > 1)
		{
            printf("Invalid gender. Please enter 0 for male or 1 for female:\n");
            scanf("%u", &students[i].gender);
        }

        printf("Enter age (0-31):\n");
        scanf("%u", &students[i].age);
        
		while (students[i].age > 31)
		{
            printf("Invalid age. Please enter a value between 0 and 31:\n");
            scanf("%u", &students[i].age);
        }
    }
}

void Display_Info(struct student students[], int count)
{
    for (int i = 0; i < count; i++)
	{
        printf("\nStudent %d Information:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Standard: %u\n", students[i].standard);
        printf("Gender: %s\n", students[i].gender == 0 ? "Male" : "Female");
        printf("Age: %u\n", students[i].age);
    }
}

