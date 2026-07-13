#ifndef STUDENT_H
#define STUDENT_H

#define NUM_STUDENTS 5
#define NUM_SUBJECTS 3
#define MAX_MARK 100
#define PASS_PERCENTAGE 50.0

// This struct holds all information about one student
typedef struct
{
    char name[50];
    int age;
    char level[20];
    int marks[NUM_SUBJECTS];
    int total;
    float percentage;
    char status[10];   // "Pass" or "Fail"
} Student;

// Reads name, age, level, and marks for all students
void scanStudents(Student students[], int size);

// Calculates the total marks for each student
void calcTotal(Student students[], int size);

// Calculates the percentage and pass/fail status for each student
void calcPercentage(Student students[], int size);

// Prints a full report for each student
void printReport(Student students[], int size);

#endif
