#include <stdio.h>

int main()
 {
 char StudentName[30];
 int mark;
 char grade;

 printf("Enter the name of the student!\n"); 
    scanf("%s", StudentName);

    printf("Enter the student Mark\n");
    scanf("%d", &mark);

    if (mark >= 80)
    {
        printf("%s You got A, Excellent!\n", StudentName);
    }
    printf("Enter the grade: ");
    scanf(" %c", &grade);
    return 0;
}