#include<stdio.h>

typedef struct Student{

	char name[20];
	int ID;
	float marks;
}stud_t;

void writeData(stud_t , *s);
void readData(stud_t, *s);

int main()
{
	Student student1 = {"abc", 1, 90};

    writeData(&student1);

    printf("Student records from file:\n");
    readData();

}

void writeData(stud_t, *s)
{
	FILE *fw = fopen("record.txt","w");
    
    fprintf(fw, "Name: %s\nID: %d\n marks: %.2f\n", student->name, student->ID, student->marks);
    
    fclose(file);
}

void readData()
{
    FILE *file = fopen("record.txt", "r");
    
    stud_t student;

    fscanf(file, "Name: %[^\n]\n ID: %d\n Grade: %f\n", student.name, &student.id, &student.grade);

    printf("Name: %s\n ID: %d\n marks: %.2f\n", student.name, student.ID, student.marks);
   
    fclose(file);
}

