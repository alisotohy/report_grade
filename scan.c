#include <stdio.h>
#include "student.h"

// This function asks the user to enter information for every student
void scanStudents(Student students[], int size)
{
    int i, j;

    for (i = 0; i < size; i++)
    {
        printf("\n----- Student %d -----\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);

        do
          {
           printf("Enter age: ");
           scanf("%d", &students[i].age);

           if(students[i].age <= 0)
              {
                   printf("Wrong age, try again.\n");
              }
           } 
           while(students[i].age <= 0);

        printf("Enter level: ");
        scanf(" %[^\n]", students[i].level);

        for (j = 0; j < NUM_SUBJECTS; j++)
        {
            do
            {
             printf("Enter mark for subject %d (0 - %d): ", j + 1, MAX_MARK);
             scanf("%d", &students[i].marks[j]);

               if(students[i].marks[j] < 0 || students[i].marks[j] > MAX_MARK)
                {
                 printf("Invalid mark! Please enter a value from 0 to %d.\n", MAX_MARK);
                }
           }
           while(students[i].marks[j] < 0 || students[i].marks[j] > MAX_MARK);
        }
    }
}