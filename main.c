#include <stdio.h>
#include "student.h"

int main()
{
    Student students[NUM_STUDENTS];

    // Step 1: Read information for all students
    scanStudents(students, NUM_STUDENTS);

    // Step 2: Calculate the total marks for each student
    calcTotal(students, NUM_STUDENTS);

    // Step 3: Calculate the percentage and pass/fail status
    calcPercentage(students, NUM_STUDENTS);

    // Step 4: Print the final report for all students
    printReport(students, NUM_STUDENTS);

    return 0;
}
