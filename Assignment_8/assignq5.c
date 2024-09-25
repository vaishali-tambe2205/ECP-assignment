#include<stdio.h>
#include<string.h>

#define Total_Student 5

void Accept_Info();
void Display_Info();
void Search_student();
void Sort_By_Roll_Number();
void Sort_By_Name();

struct student{

	int rollnum;
	char name[20];
	float marks;
}S[Total_Student];

int main()
{
	Accept_Info();

	Display_Info();
	Sort_By_Roll_Number();
    printf("Student Information sorted by Roll Number:\n");
    Display_Info();
    
    Sort_By_Name();
    printf("Student Information sorted by Name:\n");
    Display_Info();

	Search_student();

	return 0;
}

void Accept_Info(){

	for(int i=0; i<Total_Student; i++)
	{
	printf("Enter student %d information :\n", i+1);
	
	printf("Enter student roll number:\n");
	scanf("%d",&S[i].rollnum);
	
	printf("Enter student name :\n");
	scanf("%*c%[^\n]",S[i].name);
	
	printf("Enter student marks :\n");
	scanf("%*c%f",&S[i].marks);
	}
}

void Display_Info(){

	for(int i=0; i<Total_Student; i++)
	{
	printf("Student %d Information :\n", i+1);

	printf(" Roll Number : %d\n", S[i].rollnum);
	printf(" Name        : %s\n", S[i].name);
	printf(" Marks       : %.2f\n", S[i].marks);
	}
	}

void Search_student(){

	int rollnum;
    int found = 0;
    
    printf("Enter roll number to search:\n");
    scanf("%d", &rollnum);
    
    for (int i = 0; i < Total_Student; i++) {
        if (S[i].rollnum == rollnum) {
            printf("Student found:\n");
            printf(" Roll Number : %d\n", S[i].rollnum);
            printf(" Name        : %s\n", S[i].name);
            printf(" Marks       : %.2f\n", S[i].marks);
            found = 1;
            break;
        }
    }
    
    if (!found) {
        printf("Student with roll number %d not found.\n", rollnum);
    }
}

void Sort_By_Roll_Number() {
    
	struct student temp;

    for (int i = 0; i < Total_Student - 1; i++) {
    
		for (int j = i + 1; j < Total_Student; j++) {
        
			if (S[i].rollnum > S[j].rollnum) {
                temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }
}

void Sort_By_Name() {
    
	struct student temp;
    
	for (int i = 0; i < Total_Student - 1; i++) {
        
		for (int j = i + 1; j < Total_Student; j++) {
            
			if (strcmp(S[i].name, S[j].name) > 0) {
                temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
		}
	}
}
