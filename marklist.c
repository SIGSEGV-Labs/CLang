#include <stdio.h>
int main()
{
    char name[50];
    int marks;
    char grade;
    // input
    printf("Enter Student Name: ");
    scanf("%s", &name);

    printf("Enter Student Marks: ");
    scanf("%d", &marks);

    printf("enter Student Grade: ");
    scanf(" %c", &grade);

    // output
    printf("\n======Student Mark list====\n");
    printf("Student Name: %s\n", name);
    printf("Student Marks: %d\n", marks);
    printf("Student Grade: %c\n", grade);
    printf("==============================\n");
    return 0;
}