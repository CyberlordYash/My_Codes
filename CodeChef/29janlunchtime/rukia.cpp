#include <stdio.h>
#include <string.h>
struct college
{
    char code[2];
    int estd_year;
    char college_name[20];
    int no_of_courses;
};
struct college col[450]; // 450 ...creating array of 450 colleges (col1,col2,col3...) of structure college
struct course
{
    char course_name[20];
    int duration;
    int no_of_students;
};
struct course cour[50]; // 50 ...creating array of 50 courses(cour1,cour2,cour3...) of structure course
// initializing some functions
void set_college_data(int num_clg);
void display_college(int num_clg);
void set_courses(int num_cor);
void display_courses(int num_cor);

// defining all functions
void set_college_data(int num_clg)
{
    for (int i = 0; i < num_clg; i++) // 450
    {
        fflush(stdin);
        printf("\nEnter the College Code :");
        scanf("%[^\n]%*c", col[i].code);
        fflush(stdin);
        printf("\nEnter the College year :");
        scanf("%d", &col[i].estd_year);
        fflush(stdin);
        printf("\nEnter the College Name :");
        scanf("%[^\n]%*c", col[i].college_name);
        fflush(stdin);
        printf("\nEnter the no of courses :");
        scanf("%d", &col[i].no_of_courses);
        fflush(stdin);
        set_courses(col[i].no_of_courses);
    }
}
void display_college(int num_clg)
{
    for (int i = 0; i < num_clg; i++) // 450
    {
        printf("\nCode of the College %d = %s", i + 1, col[i].code);
        printf("\nyear = %d", col[i].estd_year);
        printf("\nName of the College %d = %s", i + 1, col[i].college_name);
        printf("\nNo of courses of the College %d = %d\n", i + 1, col[i].no_of_courses);
        printf("%d",col[i].no_of_courses);
        display_courses(col[i].no_of_courses);
    }
}
void set_courses(int num_cor)
{
    for (int i = 0; i < num_cor; i++) // 50
    {
        fflush(stdin);
        printf("\nEnter the course name :");
        scanf("%[^\n]%*c", cour[i].course_name);
        fflush(stdin);
        printf("\nEnter the duration (in hours) :");
        scanf("%d", &cour[i].duration);
        fflush(stdin);
        printf("\nEnter the No of students :");
        scanf("%d", &cour[i].no_of_students);
    }
}
void display_courses(int num_cor)
{
    for (int i = 0; i < num_cor; i++) // 50
    {
        printf("\nName of the course = %s", cour[i].course_name);
        printf("\nduration = %d", cour[i].duration);
        printf("\nNo of students = %d\n", cour[i].no_of_students);
    }
}

int main()
{
    int number_of_clg;
    printf("Number of college :");
    scanf("%d", &number_of_clg);
    printf("\nEnter data of each college :\n");
    // calling set_college_data func.
    set_college_data(number_of_clg);

    

    // display college data elements
    display_college(number_of_clg);

    return 0;
}