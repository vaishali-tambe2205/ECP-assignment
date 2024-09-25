#include <stdio.h>
#include <string.h>

#define TOTAL_STUDENTS 3

struct student {
    char name[20];
    int standard;
    union {
        char grade; // For grades A/B/C till 4th standard
        float percentage; // For percentage after 4th standard
    } result;
    int result_type; // 0 for grade, 1 for percentage
};
void Accept_Info(struct student students[], int count);
void Display_Info(struct student students[], int count);

int main() {
    struct student students[TOTAL_STUDENTS];

    Accept_Info(students, TOTAL_STUDENTS);
    Display_Info(students, TOTAL_STUDENTS);

    return 0;
}

void Accept_Info(struct student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter information for student %d:\n", i + 1);

        printf("Enter name:\n");
        scanf(" %[^\n]", students[i].name);

        printf("Enter standard (1-12):\n");
        scanf("%d", &students[i].standard);

        if (students[i].standard <= 4) 
		{
            printf("Enter grade (A/B/C):\n");
            scanf(" %c", &students[i].result.grade);
            students[i].result_type = 0; 
        }
		else
		{
            printf("Enter percentage (e.g., 85.5):\n");
            scanf("%f", &students[i].result.percentage);
            students[i].result_type = 1; 
        }
    }
}

void Display_Info(struct student students[], int count)
{
    for (int i = 0; i < count; i++)
	{
        printf("\nStudent %d Information:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Standard: %d\n", students[i].standard);

        if (students[i].result_type == 0)
		{
            printf("Result: Grade %c\n", students[i].result.grade);
        } else 
		{
            printf("Result: %.2f%%\n", students[i].result.percentage);
        }
    }
}

