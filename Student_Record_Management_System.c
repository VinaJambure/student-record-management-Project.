#include <stdio.h>

struct student{
    int roll;
    char name[30];
    float marks;
};

struct student s[50];
int count = 0;

// Function declarations (should be before main)
void addStudent();
void displayStudents();
void searchStudents();

void addStudent()
{
    printf("Enter Roll Number: ");
    scanf("%d", &s[count].roll);

    printf("Enter Name: ");
    scanf("%s", s[count].name);

    printf("Enter Marks: ");
    scanf("%f", &s[count].marks);

    count++;
}

void displayStudents()
{ 
    for(int i = 0; i < count; i++)
    {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
}

void searchStudents()
{
    int roll, found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    for(int i = 0; i < count; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nStudent Found:");
            printf("\nName: %s", s[i].name);
            printf("\nMarks: %.2f\n", s[i].marks);
            found = 1;
        }
    }

    if(found == 0)
    { 
        printf("\nStudent not found.\n");
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudents();
                break;

            case 4:
                return 0;

            default:
                printf("\nInvalid choice.\n");
        }
    }
}
