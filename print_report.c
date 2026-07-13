#include <stdio.h>
#include "student.h"

// This function prints a full report for every student
void printReport(Student students[], int size)
{
    int i, j;

    printf("\n===================================\n");
    printf("           STUDENT REPORT\n");
    printf("===================================\n");

    for (i = 0; i < size; i++)
    {
        printf("\nName    : %s\n", students[i].name);
        printf("Age     : %d\n", students[i].age);
        printf("Level   : %s\n", students[i].level);

        printf("Marks:\n");

        for(j=0;j<NUM_SUBJECTS;j++)
        {
          printf("Subject %d = %d\n",j+1,students[i].marks[j]);
        }
        printf("\n");

        printf("Total   : %d\n", students[i].total);
        printf("Percent : %.2f%%\n", students[i].percentage);
        printf("Status  : %s\n", students[i].status);
        printf("-----------------------------------\n");
    }
}
