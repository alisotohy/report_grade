#include "student.h"

// This function calculates the total marks (sum of all subjects)
// for every student, and stores it inside students[i].total
void calcTotal(Student students[], int size)
{
    int i, j;
    int sum;

    for (i = 0; i < size; i++)
    {
        sum = 0;

        for (j = 0; j < NUM_SUBJECTS; j++)
        {
            sum = sum + students[i].marks[j];
        }

        students[i].total = sum;
    }
}
