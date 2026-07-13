#include <string.h>
#include "student.h"

// This function calculates the percentage for every student
// and decides if the student passed or failed
void calcPercentage(Student students[], int size)
{
    int i;
    int maxTotal;

    // Maximum possible total marks (all subjects combined)
    maxTotal = NUM_SUBJECTS * MAX_MARK;

    for (i = 0; i < size; i++)
    {
        students[i].percentage = ((float) students[i].total / maxTotal) * 100;

        if (students[i].percentage >= PASS_PERCENTAGE)
        {
            strcpy(students[i].status, "Pass");
        }
        else
        {
            strcpy(students[i].status, "Fail");
        }
    }
}
